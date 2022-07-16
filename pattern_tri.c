/*Documentation
Name:G.Sahithi
Date:21-03-2022
Description:C program to print triangle pattern as shown below
Sample input:
Enter the number: 4
Sample output:
  1 2 3 4
  5   6
  7 8
  9
*/

#include <stdio.h>
int main()
{
    int num,i,j,count; //variable declaration
    printf("Enter the number: "); //stmnt to be printed
    scanf("%d", &num); //reading a number from user
    count=1; //initialising count with 1

    for( i=1;i<=num;i++) //outer for loop which runs for num times
    {
	for(j=num;j>=i;j--) //inner for loop which runs column number of times
	{ 
          if (i==1||j==num||i==j) //checking if the any of the conditions is true using or operator
	  {
            printf("%d ",count); //prints the output of count
	    count=count+1; //incrementing the count
          }
          else
          {
            printf("  "); //if the if condition fails then space is printed
          }
	  
	}

	 printf("\n"); //prints the next line
    }
    return 0;
}

