/* Write a C program to find the sum of elements in an array using a function.*/
#include<stdio.h>
#include<conio.h>
int sum (int arr[],int n)
{
	int i,total=0;
	for(i=0;i<n;i++)
	{
		total=total+arr[i];
	}
	return total;
}
void main()
{
	clrscr();

	int arr[5],i,result;
	printf("Enter Array's Elements:\n");


	for(i=0;i<5;i++)
	{
		scanf(" %d",&arr[i]);
	}
	result=sum(arr,5);
	printf("Sum of Array Elements =%d",result);
	getch();

}