/*Documentation
Name:G.Sahithi
Date:13-04-22
Description:C program to implement your own isblank() function
Sample input:
Enter the character:a
Sample output:
The character 'a' is not a blank character
*/

#include <stdio.h> 
#include <ctype.h> //header files

int my_isblank(int); //function prototype
int main()
{
    char ch; 
    int ret; //variable declaration

    printf("Enter the character:"); //stmnt to be printed
    scanf("%c", &ch); //read the charcter from user

    ret = my_isblank(ch); //function calling and collecting the return value in ret

    if(ret == 1) //check if the return value is 1
    {
	printf("The character %c is a blank charcater\n", ch); //prints it is a blank character
    }
    else
    {
	printf("The charcater %c is not a blank character\n", ch); //prints it is not a blank character
    }
    return 0;
}
int my_isblank(int ch) //function definition
{
    if(ch == 32 || ch == 9) //checking if the entered character's ascii value is 32 or 9
    {
	return 1; //returns 1
    }
    else
    {
	return 0; //returns 0
    }
}

