/*Documentation
Name:G.Sahithi
Date:13-05-2022
Description:C Program to replace each string of one or more blanks by a single bank
Sample input:
Enter the string with more spaces in between two words
Pointers      are        sharp    knives
Sample output:
Pointers are sharp knives
*/

#include <stdio.h> //header file
void replace_blank(char *); //function prototype
int main()
{
    char str[100]; //declaration of character array
    printf("Enter the string with more spaces in between two words\n");//stmnt to be printed
    scanf("%[^\n]",str); //read the input string into array

    replace_blank(str); //function calling

    return 0; //successful termination
}

void replace_blank(char *str) //function definition
{
    
    for(int i = 0; str[i] != '\0'; i++) //for loop which runs until array is not equal to null character 
    {
	  if(str[i] == ' ' && str[i+1] == ' ') //check if the element is blank space
	  {
	      for(int j = i; str[j] ; j++) //for loop runs if character is not null
	      {
	       
                   str[j] = str[j+1]; //replace next character withprevious character
	      }

	     i--; //decrement i
           }
    }
     
    printf("%s\n", str); //prints the string without multiple spaces
}
