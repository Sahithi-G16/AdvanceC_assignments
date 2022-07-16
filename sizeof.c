/*Documentation
Name:G.Sahithi
Date:21-05-2022
Description:C Program to define a macro SIZEOF(x),without using sizeof operator
Sample input:./sizeof
Sample output:
size of int : 4 bytes
size of char : 1 byte
size of float : 4 bytes
size of double : 8 bytes
size of unsigned int : 4 bytes
size of long int : 8 bytes
*/


#include <stdio.h>
#include <stdlib.h> //header file
  

#define SIZEOF(x) (char *)(&x + 1) - (char *)(&x) //macro definition for sizeof
int main()
{

    int x = 7;
    float f = 10.8;
    char c = 'a';
    double d = 1.2;
    unsigned int ui = 3.4;
    long int li = 4;
    short sh = 2; //variable definition
    int arr[4] = {0,1,2,3}; //array definition
    long long int lli = 15; 
    struct details //structure definition
    {
	char name[50];
	int num;
	int code;
    }s;


    printf("size of int : %lu \n",SIZEOF(x)); 
    printf("size of char : %lu \n",SIZEOF(c));
    printf("size of float : %lu \n",SIZEOF(f));
    printf("size of double : %lu \n",SIZEOF(d));
    printf("size of unsigned int : %lu \n",SIZEOF(ui));
    printf("size of long int : %lu \n",SIZEOF(li));
    printf("size of short : %lu \n",SIZEOF(sh));
    printf("size of array : %lu \n",SIZEOF(arr));
    printf("size of struct : %lu \n",SIZEOF(s));
    printf("size of long long int : %lu \n",SIZEOF(lli)); //prints the sizeof variables

} 
