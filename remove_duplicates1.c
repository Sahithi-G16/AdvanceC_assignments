/*Documentation
Name:G.Sahithi
Date:28-04-2022
Description:C program to remove duplicate elements in a given array
Sample input:
Enter the size: 5
Enter elements into the array: 5 1 3 1 5
Sample output:
After removing duplicates: 5 1 3
*/

#include <stdio.h> //header file
void fun(int *arr1, int size, int *arr2, int *new_size); //function prototype

int main()
{

  int size, new_size; //variable declaration
  printf("Enter the size:"); //stmnt to be printed
  scanf("%d", &size); //read the size of array from user
  int arr1[size]; 
  int arr2[size]; //array declaration

  printf("Enter elements into the array:"); //stmnt to be printed

  for(int i = 0; i < size; i++) //for loop to read elements of array
  {
      scanf("%d", &arr1[i]); //stmnt to read the elements
  }

  fun(arr1, size, arr2, &new_size); //function calling

  printf("After removing duplicates: "); //stmnt to be printed

  for(int i = 0; i < new_size; i++) //for loop to print the array elements
  {
 
      printf("%d ", arr2[i]);
  }
  return 0; //successful termination
	      

}
void fun(int *arr1, int size, int *arr2, int *new_size) //function definition
{
    arr2[0] = arr1[0]; //copying the 1st element of array1 to array2
    int count = 1; //initialising count with 1
   
    for( int i = 1; i < size; i++) //outer for loop which runs for size no.of times
    {
	  for(int j = 0; j <= i; j++) //inner for loop which runs for i no.of times
          {
	       if(arr1[i] == arr1[j]) //check if ith element of array1 is equal to jth element
	       {
		    if(i != j) //check if i is not equal to j
		    {
		       break; //breaks the loop if stmnt is true
		    }
		    else
		    {
		        arr2[count++] = arr1[j]; //assigning the array2 with arr1 element
		  
		    }
	       }

           }
      }

     *new_size = count; //assigning count to pointer new_size
}


