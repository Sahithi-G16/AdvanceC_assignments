/*Documentation
Name:G.Sahithi
Date:08-04-2022
Description:C program to replace 'n' bits of a given number
Sample input:
Enter the number:15
Enter the number of bits:2
Enter the value:1
Sample output:
Result = 13
*/

#include <stdio.h>
int replace_nbits(int,int,int); //function prototype
int main()
{
    int num,n,val,res=0; //variable declaration
    printf("Enter num,n and val:"); //stmnt to be printed
    scanf("%d%d%d",&num,&n,&val); //read the number,no.of bits and value from user
    res=replace_nbits(num,n,val); //function calling and storing the return in res
    printf("Result = %d\n",res); //prints the result
}
int replace_nbits(int num,int n,int val) //function definition
{
    int result; //variable declaration
    result = ~((1<<n)-1) & num | ((1<<n)-1) & val; //clear the n bits from num and get n bits from val and perform or operation
    return result; //return result
}


    

