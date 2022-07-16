/*Documentation
Name:G.Sahithi
Date:18-04-22
Description:C program to find the second largest element in an array
Sample input:
Enter the size of the Array: 5
Enter the elements into the array: 5 1 4 2 8
Sample output:
Second largest element of the array is 5
*/

#include <stdio.h>
int sec_largest(int *, int); //function prototype
int main()
{
    int size, ret; //variable declaration
    printf("Enter the size of the array: "); //stmnt to be printed
    scanf("%d", &size); //read the size from user
    int arr[size]; //array declaration
    printf("Enter the elements into the array: ");

    for(int i =0 ; i < size; i++) //for loop to read the array elements
    {
	scanf("%d", &arr[i]); //reading elements from user
    }

    ret = sec_largest(arr, size); //function calling and collecting the return value in ret
    printf("Second largest element of the array is %d\n", ret); //stmnt to be printed
    return 0; //successful termination
}
int sec_largest(int *arr, int size) //function definition
{

 int largest = arr[0]; //initialising largest with first element of array
 int smallest = arr[0]; //initialising smallest with first element of array

 for(int i = 1; i < size; i++) //for loop to find the largest and smallest numbers of the array
 {
     if(largest < arr[i]) //checking if ith element is greater than 'lagest'
     largest = arr[i]; //assigning the ith element to 'largest' variable
     if(smallest > arr[i] ) //checking if the ith element is less than 'smallest'
     smallest = arr[i]; //assigning the ith element to 'smallest' variable
     
 }

 for(int i = 0; i < size; i++) //for loop to find out the second largest element of array
 {
     if(arr[i] > smallest && arr[i] < largest) //checking if the ith element is greater than 'smallest' and less than 'largest'
     smallest = arr[i]; //assigning ith element of array to 'smallest' variable
 }

         return smallest; //returns the second largest value of array
 }

