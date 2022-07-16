/*Documentation
Name:G.Sahithi
Date:17-03-2022
Description:C program to check if a number is odd or even
Sample input:Enter the value of 'n': -2
Sample output:-2 is negative even number
*/

#include <stdio.h>
int main()
{
    //variable declaration
    int num;

    //reading input from user
    printf("Enter the value of 'num': ");
    scanf("%d", &num);
    
    if(num > 0) //condition to check if the number is positive
    {
	if(num % 2 == 0) //condition to check if number is even or not
	{
	    printf("%d is positive even number\n", num); //stmnt to be printed if num is positive and even
	}
	else
	{
	    printf("%d is positive odd number\n", num); //stmnt to be printed if num is positive and odd
	}
    }
    else if(num < 0) //condition to check if number is negative
    {
	if(num % 2 == 0) //condition to check if number is even or not
	{
	    printf("%d is negative even number\n", num); //stmnt to be printed if num is negative and even
	}
	else
	{
	    printf("%d is negative odd number\n", num); //stmnt to be printed if num is negative and odd
	}
    }
    else if(num == 0) //condition to check if number is zero
    {
	printf("%d is neither odd nor even\n", num); //stmnt to be printed if number is zero
    }
    return 0;
}


