/*Documentation
Name:G.Sahithi
Date:18-04-22
Description:C program to find the third largest element in an array
Sample input:
Enter the size of the Array: 5
Enter the elements into the array: 5 1 4 2 8
Sample output:
Third largest element of the array is 4
*/

#include <stdio.h>
int third_largest(int *, int); //function prototype
int main()
{
    int size, ret; //variable declaration
    printf("Enter the size of the array: "); //stmnt to be printed
    scanf("%d", &size); //read the size of array from user
    int arr[size]; //array declaration
    printf("Enter the elements into the array: "); //stmnt to be printed

    for(int i = 0 ; i < size; i++) //for loop to read the elements of array from user
    {
	scanf("%d", &arr[i]); //reading elements of array
    }

    ret = third_largest(arr, size); //function calling and collecting the return value in ret
    printf("Second largest element of the array is %d\n", ret); //stmnt to print the value of ret
    return 0; //successful termination
}
int third_largest(int *arr, int size) //function definition
{

   int largest = arr[0]; //initialising largest with first element of array
   int smallest = arr[0]; //initialising smallest with first element of array
   int small_val; //variable declaration

   for(int i = 1; i < size; i++) //for loop to find the largest and smallest numbers of array
   {
       if(largest < arr[i]) //check if the ith element is greater than largest
       largest = arr[i]; //if condition is true,then assign ith element to 'largest' variable

       if(smallest > arr[i]) //check if the ith element is smaller than smallest
       smallest = arr[i]; //if condition is true,then assign ith element to 'smallest' variable
   }
   small_val = smallest; //initialising small_val variable with smallest value 

   for(int i = 0; i < size; i++) //for loop to find the second largest element in the array
   {
       if(arr[i] > smallest && arr[i] < largest) //condition to check if the ith element is greater than smallest and less than largest 
       smallest = arr[i]; //assigning ith element to 'smallest' variable
   }
   largest = smallest; //reassigning largest with second largest number

  for(int i = 0; i < size; i++) //for loop to find the third largest element of array
  {
      if(arr[i] < largest && arr[i] > small_val) //check if the ith element is greater than 'small_val' and less than largest
      small_val = arr[i]; //assigning the ith element value to 'small_val' variable
  }
  return small_val; //return small_val
}
