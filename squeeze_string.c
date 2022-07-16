/*Documentation
Name:G.Sahithi
Date:13-05-2022
Description:C Program to squeeze the character in s1 that matches any character in the string s2
Sample input:
Enter s1 : Dennis Ritchie
Enter s2 : Linux
Sample output:
After squeeze s1 : Des Rtche
*/

#include <stdio.h> //header file

void squeeze(char *, char *); //function prototype

int main() 
{
    char str1[100], str2[100]; //declaration of character arrays

    printf("Enter string1:"); //stmnt to be printed
    scanf("%[^\n]", str1); //read the string1 until next line
    

    printf("Enter string2:"); //stmnt to be printed
    scanf(" %[^\n]", str2); //read the string2 until next line

    squeeze(str1, str2); //function calling

    printf("After squeeze s1 : %s\n", str1); //prints the string1 after squeezing the characters in string2
}

void squeeze(char *str1,char *str2) //function definition
{
    int i,j,k; //variable declaration

    for(i = 0; str2[i] != '\0'; i++) //loop which runs until null character
    {
        for(j = 0; str1[j] != '\0'; j++) //loop which runs until null character
        {
	    if(str2[i] == str1[j]) //comparing ith element of string2 with jth element of string1 
	    {
	       for(k = j; str1[k] != '\0'; k++) //for loop which runs until null character 
	       {
		    str1[k] = str1[k+1]; //assigning kth element of string1 with  k+1 th element of string1

		    j = 0; //assigning j with zero
	        }

	     }
	  
          }
      }

  str1[j] ='\0'; //assigning the last element of string1 with null character

}
