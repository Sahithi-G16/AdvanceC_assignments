/*Documentation
Name:G.Sahithi
Date:13-05-2022
Description:C Program to implement getword function
Sample input:
Enter the string: Welcome to Emertxe
Sample output:
You entered Welcome and the length is 7
*/

#include <stdio.h> //header file
int getword(char *str); //function prototype

int main()
{
    int len = 0; //initialising len with 0
    char str[100]; //declaration of character array  

    printf("Enter the string : "); //stmnt to be printed
    scanf(" %[^\n]", str); //read the string until next line
    

    len = getword(str); //function calling

    printf("You entered %s and the length is %d\n", str, len); //stmnt which prints the length of first word of stmnt

}

int getword(char *str) //function definition
{
    int len = 0; //initialising len with zero
    	
    for(int i = 0; str[i]; i++) //for loop which runs until null character
    {
	if(str[i] == ' ') //check if ith element is blank space
	{
	    str[i] = '\0';//assigning the ith element with null character
	}

    }

    for(int i = 0; str[i] != '\0' ; i++) //forloop which runs until null character
    {
        len++; //increment the length
    }

     return len; //returns the value of length

}


