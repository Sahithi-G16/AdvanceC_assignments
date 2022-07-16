/*Documentation
Name:G.Sahithi
Date:21-03-2022
Description:C program to print the numbers in X format as shown below
Sample input:
Enter the number: 4
Sample output:
    1  4
     23
     23
    1  4
*/

#include <stdio.h>
int main()
{
    int i,j,num; //variable declaration
    printf("Enter the number:"); //stmnt to be printed
    scanf("%d", &num); //readng a number from user

    for(i=1; i<=num; i++) //loop which runs from num times
    {
	for(j=1; j<=num; j++) //inner for loop which runs for num times
	{
	    if(i == j || j == num-i+1) //checking if the condition is true
	    {
		printf("%d", j); //stmnt which prints the j element
	    }
	    else
	    {
		printf(" "); //if the if condition is false,then space is printed
	    }
	}
	printf("\n"); //prints the next line
    }
    return 0;
}

