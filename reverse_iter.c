/*Documentation
Name:G.Sahithi
Date:13-05-2022
Description:C Program to reverse the given string using iterative method
Sample input:
Enter a string : Hello World
Sample output: 
Reverse string : dlroW olleH
*/

#include <stdio.h> //header file

void reverse_iterative(char *str); //function prototype
int my_strlen(const char *str); //function prototype

int main() 
{
    char str[100]; //character array declaration
    printf("Enter any string : "); //stmnt to be printed
    scanf("%[^\n]",str); //read the input string until nextline
    
    reverse_iterative(str); //function calling
    printf("Reversed string is %s\n",str); //stmnt to be printed
  
}

int my_strlen(const char *str) //function prototype
{
    int count = 0; //initialising count with zero
    while(*str != '\0') //loop which runs unttil loop element is not equal to null
    {
	count++; //increment count
	str++; //increment address
    }
    return count; //return address
    
}

void reverse_iterative(char *str) //function definition to reverse a string
{
    
    int i; //declaration of variable i
    int len = my_strlen(str); //initialising len with output of string length return value 

    for( i = 0; i < len/2; i++) //loop which runs for about half the length of string value
    {
	char temp =  str[i]; //assigning temp variable with ith element of array

	str[i] = str[len-1-i]; //assigning ith element with len-i-i th element of array

	str[len-1-i]= temp; //assigning len-i-1 th element with temp variable

    }

    str[len] ='\0'; //assigning '\0' character at the end of array
}

	



