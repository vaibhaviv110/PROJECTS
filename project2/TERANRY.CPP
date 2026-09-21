/*wap to ternary operator*/
#include<stdio.h>
#include<conio.h>
void main()
{
	clrscr();
	int mark;
	char grade;

	printf("Enter your mark:");
	scanf("%d",&mark);

	grade=  mark >= 90 ? 'A':
		mark >= 80 ? 'B':
		mark >= 70 ? 'C':
		mark >= 60 ? 'D':
		mark >= 50 ? 'E': 'F';

	printf("your grade is %c",grade);
	getch();
}