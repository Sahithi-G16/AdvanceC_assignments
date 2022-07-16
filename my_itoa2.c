/*Documentation
Name:G.Sahithi
Date:23-05-2022
Description:C Program to itoa function
Sample input:
Enter the number : 1234
Sample output:
Integer to string is 1234
*/

#include<stdio.h>
int itoa(int num, char *str);
int main()
{
    //variable decleration
	int i,num,len;
    //string decleration
	char str[10] = {0};
	//input from user
    printf("Enter the number : ");
    int status;
	status = scanf("%d", &num);
	//condition check for number
    if ( status != 1 )
    printf("Integer to string is 0");
    //condition check for positive number
	else if ( num > 0 )
	{
	len = itoa(num, str);
	printf("Integer to string is ");
	for(i = len; i >= 0; i--)
	{
	printf("%c", str[i]);
	}
	}
	//condition check for negative number
	else if (num < 0 )
	{
	len = itoa((num * ( - 1)), str);
	printf("Integer to string is ");
	printf("-");
	for(i = len; i >= 0; i--)
	{
	printf("%c", str[i]);
	}
	}
	return 0;
}
int itoa(int num, char *str)
{
	int num1=0;
	int num2=0;
	while (num != 0)
	{
	num1 ++;
	num2 = num % 10;
	*str = (((char)num2) + 48);
	str++;
	num = num / 10;
	}
    return num1;
}
    
