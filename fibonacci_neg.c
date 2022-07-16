/*Documentation
Name:G.Sahithi
Date:17-03-2022
Description:C program to generate Fibonacci numbers
Sample input:
Enter a number: -8
Sample output:0, 1, -1, 2, -3, 5, -8
*/

#include <stdio.h>
int main()
{
    int num, first_num=0, second_num=1, diff=0;//declaring the variables
    printf("Enter a number: "); 
    scanf("%d", &num);//reading a number from user

         if(num <= 0) //checking if the number is greater than 0
	 {
	    while( diff >= num && diff <= -num ) //loop which runs until the diff is greater than num and less than -num
	    {
	     printf("%d, ", diff); //stmnt to print the difference
             first_num = second_num; //assigning first_num with second_num
	     second_num = diff; //assigning second_num with first_num
	     diff = first_num - second_num; //subtracting the second_num from first_num
	    }
	    
	 }
	 else
	 {
	     printf("Invalid input\n"); //stmnt to be printed if the entered num is greater than 0
	 }
	 printf("\n");
	 return 0;
}	 
        

