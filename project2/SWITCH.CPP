
/* Switch case*/
#include<stdio.h>
#include<conio.h>

void main()
{
	clrscr();
	char grade;
	printf("Enter Your Grade: ");
	scanf("%c",&grade);
	switch (grade)
	{
		case 'A':
		printf("Excellent work...!");
		break;
		case 'B':
		printf("Well Done..!");
		break;
		case 'C':
		printf("Good Job...!");
		break;
		case 'D':
		printf("You Passed ,but you could do better!");
		break;
		case 'F':
		printf("Sorry ,You Failed");
		break;
		default:
		printf("invelid Grade..!");


	}

	getch();
}