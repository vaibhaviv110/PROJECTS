/* Triangle angle */
#include<stdio.h>
#include<conio.h>

void main()
{
	clrscr();
	int firstangle,secondangle,thirdangle;
	printf("Enter First Angle: ");
	scanf("%d", &firstangle);
	printf("Enter Second  Angle: ");
	scanf("%d", &secondangle);
	thirdangle =180-firstangle-secondangle;
	printf("Third Angle: %d",thirdangle);




	getch();
}