/*Documentation
Name:G.Sahithi
Date:08-04-2022
Description:C program to 'n' bits from given position of a number
Sample input:
Enter the number:12
Enter number of bits:3
Enter the pos:4
Sample output:
Result = 3
*/

#include <stdio.h>
int get_nbits_from_pos(int, int, int); //function prototype
int main() 
{
    int num, n, pos, res = 0; //variable declaration
    printf("Enter num, n and val:"); //stmnt to be printed
    scanf("%d%d%d", &num, &n, &pos); //read the number,no.of bits and position from user
    res = get_nbits_from_pos(num, n, pos); //function calling and storing the return in res
    printf("Result = %d\n", res); //prints the res
}
int get_nbits_from_pos(int num, int n, int pos) //function definition
{
    int result; //variable declaration
    result = (num & (~(~0 << n) << (pos-n+1))) >> (pos-n+1); //bitwise operation to get 'n' bits from given position of number
    return result; //returns result
} 
