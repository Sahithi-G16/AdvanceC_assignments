/*Documentation
Name:G.Sahithi
Date:19-04-22
Description:C program to implement ispunct() function
Sample input:
Enter the character:a
Sample output:
Entered character is not punctuation character
*/

#include <stdio.h> //header file

int my_ispunct(int); //function prototype

int main()
{
    char ch; 
    int ret; //variable declaration

    printf("Enter the character:"); //stmnt to be printed
    scanf("%c", &ch); //read the character from user
    
    ret = my_ispunct(ch); //function calling and collecting the return value in ret

    if( ret == 1) //check if return value is 1
    {
	printf("Entered character is punctuation character\n"); //prints it is a punctuation character
    }
    else
    {
	printf("Entered character is not punctuation character\n"); //prints it is not a punctuation character
    }
    return 0; //successful termination
}

int my_ispunct(int ch) //function definition
{
    if( ch == 127 || ch == 32 || ch == 9 || ch >= 0 && ch <= 31 || ch >= 48 && ch <= 57 || ch >= 97 && ch <= 122 || ch >= 65 && ch <= 90) //checks for non-punctuation characters
    {
	return 0; //returns 0
    }
    else
    {
	return 1; //returns 1
    }

}
