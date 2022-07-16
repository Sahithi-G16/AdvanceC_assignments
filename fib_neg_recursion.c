/*Documentation
Name:G.Sahithi
Date:18-04-22
Description:C program to generate fibbonacci numbers using recursion
Sample input:
Enter a number:-8
Sample output:
0,1,-1,2,-3,5,-8
*/
 
#include <stdio.h> //header file
void negative_fibonacci(int, int, int, int); //function prototype

int main()
{
    int limit; //variable declaration
    printf("Enter the limit: "); //stmnt to be printed
    scanf("%d", &limit); //read the limit value from user

    if(limit <= 0) //checking if the entered limit is greater than zero
    {
        negative_fibonacci(limit, 0, 1, 0); //function calling
    }
    else
    {
	printf("Invalid input\n"); //if entered a wrong limit,then print invalid input
    }
    return 0; //successful termination
}

void negative_fibonacci(int limit, int num1, int num2, int next) //function definition
{
    if(next >= limit && next <= -limit) //checking the recursion limiting condition
    {

       printf("%d, ",next); //prints the next value(difference of previous 2 numbers)
       num1 = num2; //assigning num2 value in num1
       num2 = next; //assigning next value in next
       next = num1 - num2; //next variable stores the difference of previous 2 numbers
       negative_fibonacci(limit, num1, num2, next); //recursive function calling
    }
    
}

