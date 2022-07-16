/*Documentation
Name:G.Sahithi
Date:14-04-22
Description:C program to implement circular left shift
Sample input:
Enter num:12
Enter n:3
Sample output:
Result in Binary: 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 1 1 0 0 0 0 0
*/

#include <stdio.h>
int circular_left(int, int); //function1 prototype
int print_bits(int); //function2 prototype
int main()
{
    int num, n, ret; //variable declaration 
    printf("Enter the num:"); //stmnt to be printed
    scanf("%d", &num); //read the input from user
    printf("Enter n:"); //stmnt to be printed
    scanf("%d", &n); //read n value from user
    ret = circular_left(num, n); //function1 calling and storing the return value in ret
    print_bits(ret); //calling function2
    return 0;
}
int circular_left(int num, int n) //function1 definition
{
    int res; //variable declaration
    if(num > 0) //checking if the number is positive
    {
	res = num << n; //number is leftshift n times and result is stored in res
	return res; //return res
    }
    else
    {
	res= num << n | (unsigned) num >> 32-n; //the left shifted number and unsigned number rightshifted 32-n times are being performed by or operator
	return res; //return res
    }
}
int print_bits(int ret) //function2 definition
{
    int i,result; //variable declaration
    printf("Result in Binary: ");
    for(i = 31;i >= 0;i--) //for loop runs for 32 times to print the result in binary format
    {
	result = (ret >> i) & 1; //the return value is right shifted i times and then it is performed by and operator with 1
	result ? printf("%d ",1) : printf("%d ",0); //result prints the binary format
    }
}
