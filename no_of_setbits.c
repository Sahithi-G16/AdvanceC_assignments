/*Documentation
Name:G.Sahithi
Date:24-03-2022
Description:C program to count the number of set bits in a given number and print parity
Sample input:
Enter the number:7
Sample output:
Number of set bits = 3
Bit parity is Odd
*/


#include <stdio.h>
int main()
{
    int count=0,i,num,res,mask; //variable declaration
    printf("Enter the number:"); //stmnt to be printed
    scanf("%d", &num); //reading a number from user

    for(i = 0; i <= 31; i++) //for loop which runs for 32 times
    {
	mask = 1 << i; //mask to calculate set bit using left shift operator
	res = num & mask; //result of and operator on num and mask 

	if(  res  ) //checking if the result is non zeo
	{
	    count = count + 1; //if result is non-zero,then count is incremented
	}

    }
    printf("Number of set bits = %d\n", count); //stmnt prints the number of set bits in a given integer
    
    if(count % 2 == 0) //checking if the count is divisible by 2
    {
	printf("Bit parity is Even\n"); //if count is divisible by 2 then this stmnt is printed
    }
    else
    {
	printf("Bit parity is Odd\n"); //if count is not divisible by 2 then this stmnt is printed
    }
}


