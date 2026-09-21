/*check given string is palindrome or not*/
#include <stdio.h>
#include <conio.h>
void main()
{
	clrscr();
	char str[100];
	int i, length = 0, flag = 1;

	printf("Enter any string: ");
	scanf("%s", str);

	
	while (str[length] != '\0')
	{
		length++;
	}

	
	for (i = 0; i < length / 2; i++)
	{
		if (str[i] != str[length - 1 - i])
		{
			flag = 0;
			break;
		}
	}

	if (flag == 1)
	{
		printf("The given string is a Palindrome.");
	}
	else
	{
		printf("The given string is not a Palindrome.");
	}
	getch();
}