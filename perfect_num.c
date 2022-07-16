/*Documentation
Name:G.Sahithi
Date:17-03-2022
Description:C program to check if a number is perfect or not
Sample input:
Enter a number: 6
Sample output:Yes,entered number is perfect number
*/

#include <stdio.h>
int main()
{
    int num, factor, sum = 0; //declaration and initialisation of variables
    printf("Enter a number: "); //stmnt to be printed 
    scanf("%d", &num); //read a number from user

    if(num > 0)
    {
       for(factor=1;factor < num;factor++) //for loop which runs from 1 to the num-1
       {
         if(num % factor == 0) //checking if num is divisble by the factor
         {
	  
	  sum = sum + factor; // finding the sum of sum and factor

         }
       }
    if(sum == num) //checking if sum is equal to num
    {
       printf("yes, entered number is perfect number\n"); //print the stmnt if sum of factors is equal to number
    }
    else
    {
       printf("No, entered number is not a perfect number\n"); //print the stmnt if sum of factors is not equal to number
    }

    }
    else
    {
	printf("Error : Invalid Input,Enter only positive number\n");
    }
      
}



	
