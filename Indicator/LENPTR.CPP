/*Length finder using pointer*/
#include<stdio.h>
#include<conio.h>

void main()
{
	clrscr();
	char str[5];
	char *ptr;
	int length=0;

	printf("Enter Any String: ");
	scanf("%[^\n]",str);

	ptr=str;

	while(*ptr!= '\0')
	{
		length++;
		ptr++;
	}
	printf("The Length Of a String is :%d",length);

	getch();
}