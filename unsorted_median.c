/*Documentation
Name:G.Sahithi
Date:03-04-2022
Description:C program to find the median of two unsorted arrays
Sample input:
Enter the 'n' value for Array A:5
Enter the 'n' value for Array B:5
Enter the elements one by one for Array A: 3 2 8 5 4
Enter the elements one by one for Array B: 12 3 7 8 5
Sample output:
Median of array1:4
Median of array2:7
Median of both arrays:5.5
*/

#include <stdio.h>
int main()
{
    int size1, size2, i, j, temp1, temp2; //variable declaration
    float median1, median2, median; //variable declaration
    printf("Enter the size value of Array A:"); //stmnt to be printed
    scanf("%d", &size1); //read the size of array 1 from user
    printf("Enter the size value of Array B:"); //stmnt to be printed
    scanf("%d", &size2); //read the size of array 2 from user
    
    int arrA[size1], arrB[size2]; //array declaration

    printf("Enter the elements one by one for Array A:"); //stmnt to be printed
    for(i = 0; i < size1; i++) //for loop to read elements of array 1
    {
	scanf("%d", &arrA[i]); //stmnt to reading elements from user
    }
    printf("Enter the elements one by one for Array B:"); //stmnt to be printed
    for(i = 0; i < size2; i++) //for loop to read elements of array 2
    {
	scanf("%d", &arrB[i]);  //stmnt to read elements from user
    }
    for(i = 0; i < size1-1; i++) //nested for loop for sorting in ascending order
    {
	for(j = 0; j < size1-i-1; j++) //inner for loop which runs for < size-i-1 times
	{
	    if(arrA[j] > arrA[j+1]) //condition to check if jth element is greater than j+1 th element
	    {
		temp1 = arrA[j]; //storing the jth element in temp variable
		arrA[j] = arrA[j+1]; //storing the j+1th element in jth element  
	       arrA[j+1] = temp1; //storing j+1th element in temp variable
	    }
	}
    }
   
    if(size1%2 == 0) //condition to check if the size of array is even
    {
	median1 = ((float)arrA[size1/2] + arrA[size1/2 - 1])/2; //median is the average of two middle elements
	printf("Median of array1: %g\n", median1); //stmnt to print the median of array 1
    }
    else
    {
	median1 = arrA[size1/2]; //if size of array 1 is odd,then the median is the middle element of sorted array
	printf("Median of array1: %g\n", median1);
    }
    for(i = 0; i < size2-1; i++) //nested for loop which sorts elements of array 2 in ascending order
    { 
	for(j = 0; j < size2-1-i; j++) //inner for loop wich runs for < size-i-1 times
	{
	    if(arrB[j] > arrB[j+1]) //condition to check if jth element is greater than j+1 th element
	    {
		temp2 = arrB[j]; //storing the jth element in temp variable
		arrB[j] = arrB[j+1]; //storing the j+1th element in jth element
		arrB[j+1] = temp2; //storing j+1th element in temp variable
	    }
	}
    }
    if(size2%2 == 0) //condition to check if the size of array 2 is even
    {
       median2 = ((float)arrB[size2/2] + arrB[size2/2 -1])/2; //the median is the average of two middle elements
       printf("Median of array2: %g\n", median2); //stmnt which prnts the median
    }
    else
    {
       median2 = arrB[size2/2]; //if size of array 2 is odd,the middle element of sorted array is median
       printf("Median of array2: %g\n", median2);
    }
    median = ( median1 + median2 )/2; //the median of both arrays is the average of median of array1 and arry2
    printf("Median of both arrays: %g\n",median); //prints the median of both arrays

    return 0;
}











