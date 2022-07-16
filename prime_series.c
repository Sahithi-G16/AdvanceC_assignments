/*Documentation
Name:G.Sahithi
Date:03-04-2022
Description:C program to print all primes using sieve of eratosthenes method
Sample input: 
Enter the value of 'n': 20
Sample output:
The primes less than or equal to 20 are: 2,3,5,7,11,13,17,19
*/

#include <stdio.h>
int main()
{
    int num, i, j; //variable declaration
    printf("Enter the value of 'num':"); //stmnt to printed
    scanf("%d", &num); //reading the number from user
    if(num > 1) //checking if the number is greater than 1
    {
       int arr[num-1]; //declaring the array with 'num-1' size
   
       for(i = 0; i < num-1; i++) //outer loop which runs for num-1 times
       {
	  arr[0] = 2; //first element of array
          arr[i] = i + arr[0]; //ith element of array
	  
       }

       for(i = 0; i < num-1; i++) //outer loop which runs for num-1 times
       { 
	  if(arr[i] != 0 && arr[i] * arr[i] < num) //checking if the ith array element is > zero and its square is < num
	  {
	     for(j = i+1; j < num-1; j++) //inner for loop which runs from i+1(i.e., 3) to num-1 times
	     {
	        if(arr[j] % arr[i] == 0) //checking if the ith element divides the jth element
	        {
		  arr[j] = 0; //updating the arr[j] with zero
	        }
	     }
	   }
        }

       printf("The prime numbers less than or equal to %d are: ", num);

       for(i = 0; i < num-1; i++) //for loop which runs for num-1 times,prints all elements which are non zero
       {
          if(arr[i] != 0) //checking if the ith array element is non zero after updation
          {
	    printf("%d, ", arr[i]); //prints the array elements
          }
       }
       printf("\n"); //stmnt which prints the next line
    }
    else
    {
	printf("Please enter a positive number which is > 1\n"); //error stmnt to be printed if number is less than 1
    }

}

