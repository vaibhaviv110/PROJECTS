/* Write a C program that defines a function to print a reverse 1D array elements and print sum of all elements.*/
#include<conio.h>
#include<stdio.h>
void reverseAndSum(int arr[], int n)
{
    int i, sum = 0;

    printf("\nReverse Array Elements:\n");

    for(i = n - 1; i >= 0; i--)
    {
        printf("%d ", arr[i]);
        sum = sum + arr[i];
    }

    printf("\nSum of all elements = %d", sum);
}

void main()
{
    int arr[5], i;

    clrscr();

    printf("Enter 5 elements:\n");

    for(i = 0; i < 5; i++)
    {
        scanf("%d", &arr[i]);
    }

    reverseAndSum(arr, 5);

    getch();
}