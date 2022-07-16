/*Documentation
Name:G.Sahithi
Date:20-3-2022
Description:C program to generate AP,GP,HP series
Sample input:
Enter the First Number 'A': 2
Enter the Common Difference/Ratio 'R':3
Enter the number of terms'N':5
Sample output:
AP = 2, 5, 8, 11, 14
GP = 2, 6, 18, 54, 162
HP = 0.5, 0.2, 0.125, 0.0909091, 0.0714285
*/

#include <stdio.h>
int main()
{
    int num, first_term, diff, sum, mul, i, add; //variable declaration
    float div;
    printf("Enter the First Number 'first_num':");
    scanf("%d", &first_term); //read first_term from user
    printf("Enter the Common Difference / Ratio 'diff':");
    scanf("%d", &diff); //read the common difference from user
    printf("Enter the number of terms 'num':");
    scanf("%d", &num); //read the number of terms to be printed from user

    sum = first_term, mul = first_term, add = first_term, div = 1 / (float)first_term; //initialising the variables
    if(first_term > 0 && diff > 0 && num > 0) //checking if all inputs are greater than zero
    {
      printf("AP = ");
      for(i = 1; i <= num; i++) //for loop which runs for num times
      {
	 printf("%d, ",sum); //stmnt which prints the AP seies
	 sum = sum + diff; //adding sum and diff and storing the output in sum
      }
      printf("\n"); //print the next line

      printf("GP = ");
      for(i = 1; i <= num; i++) //for loop which runs for num times
      {
       	 printf("%d, ",mul); //stmnt which prints GP series
	 mul = mul * diff; //multiplying the mul and diff and storing the output in mul
      }
      printf("\n"); //printing the next line
    
    
    printf("HP = ");
    for(i = 1; i <= num; i++) //for loop which runs for num times
    {
	printf("%f, ",div); //stmnt which prints the HP series
	add = add + diff; //storing the sum of add and diff in add variable
	div = 1 / (float)add; //reciprocal of the AP terms and storing in div variable
	
    }
    printf("\n"); //printing the next line

    }
    else
    {
	printf("Invalid input\n"); //if the if condition fails,invalid input stmnt is printed
    }
}


