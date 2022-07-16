/*Documentation
Name:G.Sahithi
Date:21-05-2022
Description:C Program to define macro swap (t, x, y) that swaps 2 arguments of type t
Sample input:
1.int
2.char
3.short
4.float
5.double
6.string
Enter your choice : 1

Enter the num1 : 10
Enter the num2 : 20
Sample output:
After Swapping :
num1 : 20
num2 : 10
*/

#include <stdio.h> //header file
#define SWAP(t,x,y) t z; z = x;x = y;y = z; //macro definition

int main()
{
    int choice; //variable declaration
    printf("1.int\n2.char\n3.short\n4.float\n5.double\n6.string\n"); //menu to display
    printf("Enter your choice\n"); //stmnt to be printed
    scanf("%d",&choice); //read choice from user
    
    switch(choice) //switch case
    {
	case 1: //case 1 for int values swap
	    {
	       int num1,num2;
	       printf("Enter the num1 : ");
	       scanf("%d",&num1);
	       printf("Enter the num2 : "); //read the integer values from user
	       scanf("%d",&num2);
	       SWAP(int,num1,num2); //calling macro 
	       printf("After swapping :\n");
	       printf("num1 : %d\n",num1);
	       printf("num2 : %d\n",num2); //print output after swap
	       break; //break the case
	    }
	case 2:
	    {
	       char ch1,ch2;
	       printf("Enter the num1 : "); 
	       scanf(" %c",&ch1);
	       printf("Enter the num2 : ");
	       scanf(" %c",&ch2); //read the characters from user
	       SWAP(char,ch1,ch2); //calling macro
	       printf("After swapping :\n");
	       printf("num1 : %c\n",ch1);
	       printf("num2 : %c\n",ch2); //print the output after swap
	       break; //break the case
	    }
	case 3:
	    {
	       short num1,num2;
	       printf("Enter the num1 : ");
	       scanf("%hd",&num1);
	       printf("Enter the num2 : "); //read the short int values from user
	       scanf("%hd",&num2);
	       SWAP(short,num1,num2); //macro calling
	       printf("After swapping :\n");
	       printf("num1 : %hd\n",num1);
	       printf("num2 : %hd\n",num2); //print the output after swap
	       break; //break the case
	    }
	case 4:
	    {

	       float num1,num2; 
	       printf("Enter the num1 :");
	       scanf("%f",&num1);
	       printf("Enter the num2 :");
	       scanf("%f",&num2); //read the float values from user
	       SWAP(float,num1,num2); //macro calling
	       printf("After swapping :\n");
	       printf("num1 : %lf\n",num1); //print the output after swap
	       printf("num2 : %lf\n",num2);
	       break; //break the case
	    }

	case 5:
	    {
		double num1,num2; //double variable declaration
		printf("Enter the num1 :");
		scanf("%lf",&num1);
		printf("Enter the num2 :");
		scanf("%lf",&num2); //read the double values from user
		SWAP(double,num1,num2); //macro calling
		printf("After swapping :\n");
		printf("num1 : %lf\n",num1); //print the double values after swap
		printf("num2 : %lf\n",num2);
		break; //break the case
	    }

	case 6:
	    {
		char *arr1,*arr2; //charcater pointer declaration
		printf("Enter the string1 :");
		scanf(" %[^\n]",&arr1); 
		printf("Enter the string2 :");
		scanf(" %[^\n]",&arr2); //read the string from user 
		SWAP(char *,arr1,arr2); //macro calling
		printf("After swapping :\n");
		printf("string1 : %s\n",&arr1);
		printf("string2 : %s\n",&arr2); //print the strings after swap
		break; //break the case
	    }
	default:
	    printf("Invalid choice\n");
}

}


