/*Documentation
Name:G.Sahithi
Date:24-03-2022
Description:C program to find which day of the yer
Sample input:
Enter the value of 'n': 9
Choose First Day:
1.Sunday
2.Monday
3.Tuesday
4.Wednesday
5.Thursday
6.Friday
7.Saturday
Enter the option to set the first day: 2
Sample output:
The day is Tuesday
*/


#include <stdio.h>
int main()
{
    int n, option, expr; //variable declaration
    printf("Enter the value of 'n':\n"); //stmnt to be printed
    scanf("%d", &n); //redaing the value of nth day from user
    if( n > 0 && n <= 365 ) //checking if n is in the mentioned range
    {
      printf("Choose First Day:\n"); //stmnts to display the menu so as to give a prompt to user to enter option
      printf("1.Sunday\n");
      printf("2.Monday\n");
      printf("3.Tuesday\n");
      printf("4.Wednesday\n");
      printf("5.Thursday\n");
      printf("6.Friday\n");
      printf("7.Saturday\n");
      printf("Enter the option to set the first day option:");
      scanf("%d", &option); //reading the option from user

      if( option > 0 && option <= 7) //checking if the entered option lies between 0 and 8
      {

          expr=( (((option % 7) + n) % 7) - 1 ); //expression to evaluate the nth day
    
          switch (expr) //switch condition
          {

	      case 1 :
		  printf("The day is Sunday\n"); //if nth day is 1,then prints sunday
	          break;
              case 2 :
                   printf("The day is Monday\n"); //if nth day is 2,then prints monday
 		   break;
              case 3 :
		   printf("The day is Tuesday\n"); //if nth day is 3,then prints tuesday
		   break;
	      case 4 :
		   printf("The day is Wednesday\n"); //if nth day is 4,then prints wednesday
		   break;
              case 5 :
                   printf("The day is Thursday\n"); //if nth day is 5,then prints thursday
		   break;
              case 6 :
                   printf("The day is Friday\n"); //if nth day is 6,then prints friday
                   break;
              case 7 :
                   printf("The day is Saturday\n"); //if nth day is 7,then prints saturday
                   break;
              default :
                   printf("The day is saturday\n"); //if nth day is 0,then prints saturday,
                   break;		   

	    }
       }
       else 
       {
        printf("Error : Invalid Input, first day should be > 0 and <= 7\n"); //if at all if condition fails,then this stmnt is printed
       }
    }    
   else
   {
       printf("Error: Invalid input,n value should be > 0 and <= 365\n"); //if the first if condition fails,then this stmnt is printed
   }
    
   return 0;
}
