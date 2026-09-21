/*sum of first digit & last digit*/
#include<stdio.h>
#include<conio.h>
void main()
{
	clrscr();
	int no,Firstdigit,Lastdigit,sum;
	printf("Enter Any Number:");

	scanf("%d",&no);
	Lastdigit=no%10;
	Firstdigit=no;
	while(Firstdigit>=10)
	{
		Firstdigit=Firstdigit/10;
	}
	sum=Firstdigit+Lastdigit;
	printf("The Sum Of First & Last Digit: %d",sum);

	getch();
}