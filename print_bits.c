/*Documentation
Name:G.Sahithi
Date:12-04-2022
Description:C program to print 'n' bits from LSB of a number
Sample input:
Enter the number:15
Enter number of bits:4
Sample output:
Binary form of 15: 1 1 1 1
*/

#include <stdio.h>
int print_bits(int, int); //function prototype
int main()
{
    int num, n; //variable declaration
    printf("Enter num, n:\n"); //stmnt to be printed
    scanf("%d%d", &num, &n); //read the number and no.of bits to be printed from user
    printf("Binary form of %d: ", num); //stmnt to be printed
    print_bits(num, n); //function calling
}
int print_bits(int num, int n) //function definition
{
    int i, result; //variable declaration
    for(i = n-1; i >= 0; i--) //for loop which runs for n times
    {
	result = (num >> i) & 1; //performing leftshift on number and then is and with 1
	result ? printf("%d ", 1) : printf("%d ", 0); //ternary operation which decides o/p based on condition
    }
}


