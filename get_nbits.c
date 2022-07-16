/*Documentation
Name:G.Sahithi
Date:08-04-2022
Description:C program to get 'n' bits of a given number
Sample input:
Enter the number:10
Enter number of bits:3
Sample output:
Result = 2
*/

#include <stdio.h>
int get_nbits(int,int); //prototype of function
int main() 
{
    int num,n,res=0; //variable declaration
    printf("enter num and n:"); //stmnt to be printed
    scanf("%d%d",&num,&n); //reading the values of num and n from user
    res = get_nbits(num,n); //function calling and storing the return value in res
    printf("Result = %d\n",res); //prints the result
}
int get_nbits(int num,int n) //function definition
{
    int result; //local variable declaration
    result = ((1<<n)-1) & num; //storing the generic mask and operation with num in result
    return result; //return result
}
