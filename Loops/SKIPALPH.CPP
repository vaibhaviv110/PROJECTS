/*print alphabats skip 3 charcter*/
#include<stdio.h>
#include<conio.h>
void main()
{
	clrscr();
	char ch='a';
	do
	{
		printf("%c ",ch);
		ch=ch+4;
	}
	while(ch<='z');

	getch();
}