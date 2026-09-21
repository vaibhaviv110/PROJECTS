#include<stdio.h>
#include<conio.h>
void main()
{
	clrscr();
	int c,r;
	for(r=5;r>=1;r--)
	{
		for(c=5;c>r;c--)
		{
			printf(" ");
		}
		for(c=1;c<=r;c++)
		{
			if(c % 2 == 1)
				printf("1");
			else
				printf("0");

		}
		printf("\n");
	}

	getch();
}