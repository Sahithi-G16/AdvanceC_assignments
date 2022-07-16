/*Documentation
Name:G.Sahithi
Date:19-04-22
Description:C program to print the values in sorted order without modifying or copying array
Sample input:
Enter the size : 7
Enter 7 elements
1 3 2 5 4 7 6
Sample output:
After sorting: 1 2 3 4 5 6 7
Original array values 1 3 2 5 4 7 6
*/

#include <stdio.h> //header file

void print_sort(int *, int); //function prototype

int main()
{
    int size, iter; //variable declaration
    printf("Enter the size : "); //stmnt to be printed
    scanf("%d", &size); //read the size of array from user
    int arr[size]; //array declaration

    printf("Enter %d elements\n", size); //stmnt to be printed

    for( iter = 0; iter < size; iter++) //for loop to read the array elements
    {
	 scanf("%d", &arr[iter]); //reading the array elements from user
    }
    print_sort(arr, size); //function calling
}
void print_sort(int *arr, int size) //function definition
{
    int largest = arr[0]; //initialising the largest with first element of array
    int smallest = arr[0]; //initialising the smallest with first element of array

    printf("After sorting: "); //stmnt to be printed

    for(int i = 0; i < size; i++) //for loop to find the largest and smallest element of array
    {
	 if(arr[i] > largest) //check if array element is greater than value in largest
	 largest = arr[i]; //if condition is true,then assign ith element to 'largest' variable

	 if(arr[i] < smallest) //check if array element is smallest than value in smallest
	 smallest = arr[i]; //if condition is true,then assign ith element to 'smallest' variable
    }

    printf("%d ", smallest); //prints the first smallest value of array
    int large = largest; //new variable large is assigned with 'largest' value

    for(int j = 0; j < size-1; j++) //outer for loop which runs for size-1 times
    {
	for(int i = 0; i < size; i++) //inner for loop to find the next smallest element of array
	{
	     if(arr[i] > smallest && arr[i] < largest) //check if ith element of array is greater than smallest and smaller than largest
	     {
	         largest = arr[i]; //if condition is true then assign the ith element to largest
	     }
	    
	 }	
	printf("%d ", largest); //prints the next smallest value stored in largest variable
	smallest = largest; //assigning the value in largest to 'smallest' variable
	largest = large; //assigning large value to 'largest' variable
    }

    printf("\n"); //prints next line
    printf("Original array values "); //stmnt to be printed

    for(int i = 0; i < size; i++) //for loop to prints the array elements
    {
	printf("%d ", arr[i]); //prints the array element
    }


}
