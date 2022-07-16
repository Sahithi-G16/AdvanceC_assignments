/*Documentation
Name:G.Sahithi
Date:17-03-2022
Description:C program to generate positive Fibonacci numbers
Sample input:
Enter a number: 8
Sample output:0, 1, 1, 2, 3, 5, 8
*/

#include <stdio.h>
int main()
{
    int num, sum = 0, first_num = 0, second_num = 1; //variables declaration
    printf("Enter a number: "); //stmnt to be printed
    scanf("%d", &num); //reading inut from user
     
    if(num >= 0)    //checking if num is greater than zero
    {
       while(sum <= num) //loop runs till the sum is equal to less than num
       {	
        printf("%d, ", sum); //stmnt which prints the sum 
        first_num = second_num; //assigning the first_num with second_num
        second_num = sum; //assigning the second_num with sum
        sum = first_num + second_num; //adding the first_num and second_num and storing in a variable sum
       }
    }
    else
    {
	printf("Invalid input\n"); //stmnt to be printed if the entered number is less than zero
    }
    printf("\n");
    return 0;
}
    



