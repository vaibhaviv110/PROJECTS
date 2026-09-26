/*Write a C program to find cube of each elements of an 1D array using Pointer*/
#include<stdio.h>
#include<conio.h>
void main()
{
    int arr[5];
    int *ptr;
    int i;

    clrscr();

    printf("Enter 5 elements:\n");

    for(i = 0; i < 5; i++)
    {
        scanf("%d", &arr[i]);
    }

    ptr = arr;

    printf("\nCube of each element:\n");

    for(i = 0; i < 5; i++)
    {
        printf("%d ", (*ptr) * (*ptr) * (*ptr));
        ptr++;
    }

    getch();
}