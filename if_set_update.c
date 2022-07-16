/*Documentation
Name:G.Sahithi
Date:24-03-2022
Description:C program to check Nth bit is set or not,if yes,clear the Mth bit
Sample input:
Enter the number:19
Enter 'N':1
Enter 'M':4
Sample output:Updated value of num is 3
*/

#include <stdio.h>
int main()
{
    int N,M,mask,res,num,update_num;
    
    printf("Enter the number:"); //stmnt to be printed
    scanf("%d", &num); //read a number from user
    printf("Enter 'N':"); //stmnt to give a prompt to user to enter N value
    scanf("%d", &N);   //read the N th value from user
    printf("Enter 'M':"); //stmnt to give a prompt to user to enter M value
    scanf("%d", &M); //read the M value from user

    mask = 1 << N; //expression for generic mask using left shift operator on 1
    res = num & mask; //storing the value of number and(&) mask in a variable res
    if(res) //checking if the res is a non zero number(if Nth bit is set)
    {
	update_num = num & ~(1 << M); //update the num with Mth bit as clear bit
        printf("Updated value of num is %d\n",update_num); //stmnt which prints the updated number
    }
    else
    {
	printf("Updated value of num is %d\n",num); //if Nth bit is a clear bit,the updated num is same as num
    }

}
