/* create a pattern*/
#include<stdio.h>
#include<conio.h>
void main()
{
	clrscr();
       int n=11;
	for(int r=1;r<=5;r++)
	{
		for(int c=1;c<=r;c++)
		{
			printf("%d ",n);
			n++;
		}

	printf("\n");
	}
	getch();
}