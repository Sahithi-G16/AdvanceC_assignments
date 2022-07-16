/*Documentation
Name:G.Sahithi
Date:04-05-2022
Description:C program to reverse the given string using recursive method
Sample input:
Enter a string : EMERTXE
Sample output:
Reverse string is : EXTREME
*/

#include <stdio.h> //header file

void reverse_recursive(char *str, int ind, int len); //function declaration
size_t my_strlen(const char *str); //string length function declaration

int main()
{
    char str[100]; //string declaration

    printf("Enter any string : "); //stmnt to be printed
    scanf("%[^\n]", str); //read the characters into array until nextline

    int len = my_strlen(str); //storing return value of string length function in len variable
    reverse_recursive(str, 0, len-1); //function calling

    printf("Reversed string is %s\n", str); //prints the reversed string 
}

size_t my_strlen(const char *str) //string length function definition
{
    int count = 0; //variable declaration
    while(*str != '\0') //loop runs until the string value is not equal to null  character
    {
	count++; //increments the count
	str++; //increment the address value pointed by pointer
    }
    return count; //returns count (string length)
}

void reverse_recursive(char *str, int ind, int len) //function definition to reverse a string
{
  
    char temp = str[ind]; //storing the ith element value in temp variable
    str[ind] = str[len-ind]; //storing the value of str[len-ind] in str[ind]
    str[len-ind] = temp; //

    if(ind == len/2) //checks if index value is equal to string length/2
    {
	return; //termination of reverse string function
    }
    reverse_recursive(str, ind+1, len); //recursive function calling

}

