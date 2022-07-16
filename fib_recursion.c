/*Documentation
Name:G.Sahithi
Date:18-04-22
Description:C program to generate fibbonacci numbers using recursion
Sample input:
Enter a number: 8
Sample output:
0,1,1,2,3,5,8
*/
 
#include <stdio.h> //header file
void positive_fibonacci(int, int, int, int); //function prototype

int main()
{
    int limit; //variable declaration
    printf("Enter the limit: "); //stmnt to be printed
    scanf("%d", &limit); //read the limit value from user

    if(limit >= 0) //checking if the entered limit value is positive
    {
        positive_fibonacci(limit, 0, 1, 0); //function calling
    }
    else
    {
	printf("Invalid input\n"); //if the condition fails,prints invalid input
    }
    return 0; //successful termination
}

void positive_fibonacci(int limit, int num1, int num2, int next) //function definition
{
    if(next <= limit) //checking the next value is less than or equal to entered limit
    {
       printf("%d, ", next); //prints the difference of previous two numbers
       num1 = num2; //assigning the num2 value in num1
       num2 = next; //assigning the next value in num2
       next = num1 + num2; //calculating next value as sum of previous 2 numbers
       positive_fibonacci(limit, num1, num2, next); //function calling recursively
    }
    
}

