/*Documentation
Name:G.Sahithi
Date:12-04-2022
Description:C program to toggle 'n' bits from given position of a number
Sample input:
Enter the number:15
Enter number of bits:2
Enter the pos:2
Sample output:
Result=9
*/

#include <stdio.h>
int toggle_nbits_from_pos(int, int, int); //function prototype
int main()
{
    int num, n, pos, res = 0; //variable declaration
    printf("Enter num, n and val:"); //stmnt to be printed
    scanf("%d%d%d", &num, &n, &pos); //read the number,no.of bits,position from user
    res = toggle_nbits_from_pos(num, n, pos); //function calling and storing the return in res
    printf("Result = %d\n", res); //prints the result
}
int toggle_nbits_from_pos(int num, int n, int pos)
{
    int result; //variable declaration
    result = num ^ (~(~0 << n) << (pos-n+1)); //bitwise operation to perfrom the toggle of required no.of bits from given position of number
    return result; //return result
}


