/*Documentation
Name:G.Sahithi
Date:13-05-2022
Description:C Program to count no.of characters,words and lines,entered through stdin
Sample input:
Hello world
Dennis Ritchie
Linux
Sample output:
Character count:33
Line count:3
Word count:5
*/

#include <stdio.h> //header file

int main()
{
    
    int ch_count = 0; //initialsing character count with zero
    int ln_count = 0; //initialising line count with zero
    int wd_count = 0; //initialising word count with zero
    char ch;        //declaration of character variable ch
    char ch2 = ' '; //initialising ch2 with blank space
  

   while((ch = getchar()) != EOF) //while loop to get character until EOF
   {
       
       ch_count++; //increment the character count after reading character

      if(ch == '\n') //check if ch is equal to null character

      	  ln_count++; //incrementing the line count
     
       if( ch == ' ' || ch == '\n' || ch == '\t') //check if ch equals to blankspace or tabspace or nextline
       {
	     if(ch2 != ' ' && ch2 != '\t' &&  ch2 != '\n') //check if ch2 is equal to blank space or tab space or nextline
	     {
      
	         wd_count++; //increment the word count

	     }
       }


          ch2 = ch; //assigning ch2 with ch

    }
      
   printf("Character count : %d\n", ch_count); //prints the character count
   printf("Line count : %d\n", ln_count); //prints the line count
   printf("Word count : %d\n", wd_count); //prints the word count

}
