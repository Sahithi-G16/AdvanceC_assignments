/*Documentation
Name:G.Sahithi
Date:19-04-22
Description:C program to implement your own islower() function
Sample input:
Enter the character:3
Sample output:
Entered character is not lower case alphabet
*/

#include <stdio.h> //header file

int my_islower(int); //function prototype

int main()
{
    char ch;
    int ret; //variable declaration

    printf("Enter the character:"); //stmnt to be printed
    scanf("%c", &ch); //read the character from user

    ret = my_islower(ch); //function calling and collecting the return value in ret

    if(ret == 1) //check if return value is 1
    {
	printf("Entered character is lower case alphabet\n"); //prints the charcter is lowercase
    }
    else
    {
	printf("Entered character is not lower case alphabet\n"); //prints the character is not lowercase
    }

    return 0; //successfull termination
}

int my_islower(int ch) //function definition
{
    if(ch >= 97 && ch <= 122) //checking the entered charcater's ascii value(lower case alphabets)
    {
	return 1; //returns 1
    }
    else
    {
	return 0; //returns 0
    }
}

