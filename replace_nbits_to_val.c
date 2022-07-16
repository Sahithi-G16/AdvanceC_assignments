/*Documentation
Name:G.Sahithi
Date:12-04-2022
Description:C program to put the (b-a+1) lsb's of num into val[b:a]
Sample input:
Enter the value of 'num':11
Enter the value of 'a':3
Enter the value of 'b':5
Enter the value of 'val':174
Sample output:
Result:158
*/

#include <stdio.h>
int replace_nbits_from_pos(int, int, int, int); //function prototype
int main()
{
    int num, a, b, val, res = 0; //variable declaration
    printf("Enter num,a,b,and val:"); //stmnt to be printed
    scanf("%d%d%d%d", &num, &a, &b, &val); //read the number,a,b and val from user
    if(a <= b && b <= 31) //condition to check if a<=b<=31
    {
       res = replace_nbits_from_pos(num, a, b, val); //if condition is true then function calling and store result in res
       printf("Result = %d\n", res); //prints the result
    }
    else
    {
	printf("error:invalid input\n"); //if condition fails then this stmnt is printed
    }
}
int replace_nbits_from_pos(int num, int a, int b, int val) //function definition
{
    int n = b-a+1; //calculating no.of bits
    int bits = ((1 << n)-1) & num; //get n bits from num
    for(int i=b;i>a;i--) //for loop which runs for b-a times
    {
	val = val & ~(1<<i); 
    }
    for(int i = a;i <= b;i++)
    {
	int res = bits&1;
	bits = bits>>1;
	val = val|(res<<i); //logic to replace n bits in val
    }
    return val; //return val
}

      	



