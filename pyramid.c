/*Documentation
Name:G.Sahithi
Date:24-03-2022
Description:C program to print the pyramid pattern
Sample input:
Enter the number:4
Sample output:
4
3 4 
2 3 4 
1 2 3 4 
2 3 4 
3 4 
4 
*/


#include <stdio.h>
int main()
{
    int i, j, num; //variable declaration
    printf("Enter the number:"); //stmnt to be printed
    scanf("%d", &num); //reading a number from user

    for(i = num; i >= 1; i--) //for loop which runs for num times
    {
	for(j = i; j <= num; j++) //inner for loop which runs for column number of times
	{
	   printf("%d ", j); //printing the value of j
	}
        printf("\n"); //printing the next value
    }

    for(i = 2; i <= num; i++) //for loop which runs for num-1 times
    {
	for(j = i; j <= num; j++) //inner for loop which runs for column number of times
        {
	   printf("%d ", j); //printing the value of j
	}
	printf("\n"); //printing the next line
    }

}

