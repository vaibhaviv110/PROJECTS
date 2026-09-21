/*print and count sem charchte in string*/
#include <stdio.h>
#include <conio.h>
void main()
{
	clrscr();

	char str[100];
	int i, j, length = 0, count;

	printf("Enter any string: ");
	scanf("%s", str);

	while (str[length] != '\0')
	{
		length++;
	}

	printf("\nFrequency of each letter:\n");

	for (i = 0; i < length; i++)
	{
		count = 1;

		for (j = 0; j < i; j++)
		{
			if (str[i] == str[j])
			{
				count = 0;
				break;
			}
		}

		if (count == 1)
		{
			for (j = i + 1; j < length; j++)
			{
				if (str[i] == str[j])
				{
					count++;
				}
			}

			printf("%c => %d\n", str[i], count);
		}
	}

	getch();
}