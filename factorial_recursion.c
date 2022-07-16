/*Documentation
Name:G.Sahithi
Date:28-04-2022
Description:C program to find the factorial of a given number using recursion
Sample input:
Enter the value of N:5
Sample output:
Factorial of the given number is 120
*/

#include <stdio.h> //header file
int main() 
{
    static unsigned long long int fact = 1; 
    static int num; //variable declaration
    
    if(fact == 1) //check if fact equals to 1
    {
         printf("Enter the value of N : "); //stmnt to be printed
         scanf("%d", &num); //read the number from user
    }
    if(num > 0) //check if the entered number is greater than zero
    {
         fact = fact * (num--); //calculates fact value as fact*num--
         return main(); //recursive function calling
    }
    else if(num < 0) //check if num is less than zero
    {
 	 printf("Invalid input\n"); //prints as invalid input if condition fails
    }

    if(num == 0) //check if num is equal to zero

    printf("Factorial of the given number is %llu", fact); //prints the value of factorial
}

