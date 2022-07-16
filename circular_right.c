/*Documentation
Name:G.Sahithi
Date:14-04-22
Description:C program to implement circular right shift
Sample input:
Enter num: 12
Enter n: 3
Sample output:
Result: 10000000 00000000 00000000 00000001
*/

#include <stdio.h> //header file

int circular_right(int, int); //function1 prototype
int print_bits(int); //function2 prototype
int main()
{
    int num, n, ret; //variable declaration
    printf("Enter the num:"); //stmnt to be printed
    scanf("%d", &num); //read the number from user

    printf("Enter n:"); //stmnt to be printed
    scanf("%d", &n); //read the value of n from user

    ret = circular_right(num, n); //function1 calling and storing the return value in ret
    print_bits(ret); //function2 calling
    return 0;
}
int circular_right(int num, int n) //function1 definition
{
    int res; //variable declaration
    res = (unsigned) num >> n | num << 32-n; //unsigned num is being right shifted,num is being left shifted 32-n times and or operation is used to get result
    return res; //returns result
}
int print_bits(int ret) //function2 definition
{
    int i, result; //variable declaration
    printf("Result: "); //stmnt to be printed

    for(i = 31;i >= 0;i--) //for loop which runs for 32 times,to print the binary format of number
    {
	result = (ret >> i) & 1; //rightshift the ret i times and then and operation is done with 1
        result ? printf("%d ",1) : printf("%d ",0); //bprints the binary format(1 or 0)based on true condition
    }
}    

