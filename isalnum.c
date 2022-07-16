/*Documentation
Name:G.Sahithi
Date:13-04-22
Description:C program to implement isalnum() function
Sample input:
Enter the character:a
Sample output:
The character 'a' is an alnum character 
*/

#include <stdio.h> //including the required header files
#include <ctype.h>
int my_isalnum(int); //function prototype

int main()
{
    char ch; //variable declaration
    int ret; //variable declaration

    printf("Enter the character:"); //stmnt to be printed
    scanf("%c",&ch); //read the character value from user

    ret = my_isalnum(ch); //function calling and collecting the return value in ret

    if(ret == 1) //check if return value is 1
    {
	printf("Entered character is alphanumeric character\n"); //prints it is an alnum character
    }
    else
    {
	printf("Entered character is not alphanumeric character\n"); //prints it is not an alnum character
    }

}

int my_isalnum(int ch) //function definition
{
    if(ch>=48 && ch<=57 || ch >=65 && ch <= 90|| ch>= 97 && ch <= 122) //checking if the charater's ascii value is of alnum characters
    {
	return 1; //returns 1
    }
    else
    {
	return 0; //returns 0
    }
}
