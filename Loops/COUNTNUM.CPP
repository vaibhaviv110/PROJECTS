/* digit counter */
#include<stdio.h>
#include<conio.h>

void main()

{
	clrscr();
      long int a;
    int count = 0;


    printf("Enter any Number: ");
    scanf("%ld", &a); 

    do
    {
        count++;
        a = a / 10;
    }
    while(a != 0);

    printf("Total Number of Digits: %d", count);

    getch();
}