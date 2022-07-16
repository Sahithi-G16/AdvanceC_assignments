/*Documentation
Name:G.Sahithi
Date:13-05-2022
Description:C Program to implement atoi function
Sample input:
Enter a numeric string : 12345
Sample output:
String to integer is 12345
*/

#include <stdio.h> //header files
#include <ctype.h>


int my_atoi(const char *); //function prototype


int main() 
{
    char str[20]; //declaration of character array

    printf("Enter a numeric string : "); //stmnt to be printed
    scanf("%s", str); //read the string

    printf("String to integer is %d\n",my_atoi(str)); //stmnt which prints the integer

}


int my_atoi(const char *str) //function definition
{
    int temp = 0,flag = 0; //variable declaration
    if(*str == '-') //check if character is '-'
    {
	flag--; //decrement the value of flag
	str++; //increment the pointer
    }
    else if(*str == '+') //check if character is '+'
    {
	flag++; //increment the pointer
	str++; //increment the pointer
    }


    while(*str) //check if the character is a true value
    {
	if(isdigit(*str)) //check if the enter character is a digit
	{
	    temp = (temp*10) + (*str - 48); //operation to get the required int value
	    str++; //increment the pointer
	}
	else
	break; //if condition fails break the loop
    }

    return flag ? temp*flag : temp; //returns value
}


