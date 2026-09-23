/* Calculator */
#include <stdio.h>
#include <conio.h>
int add(int a, int b)
{
	return a + b;
}

int subtract(int a, int b)
{
	return a - b;
}

int multiply(int a, int b)
{
	return a * b;
}
float divide(int a, int b)
{
	return (float)a / b;
}
int modulus(int a, int b)
{
	return a % b;
}
void main()
{
	clrscr();
	int choice;
	int a, b;

	do
	{
		printf("\n\n===== CALCULATOR =====\n");
		printf("Press 1 for +\n");
		printf("Press 2 for -\n");
		printf("Press 3 for *\n");
		printf("Press 4 for /\n");
		printf("Press 5 for %%\n");
		printf("Press 0 for Exit\n");

		printf("\nEnter your choice: ");
		scanf("%d", &choice);

		if (choice == 0)
		{
			printf("Calculator closed.");
			break;
		}

		printf("Enter first number: ");
		scanf("%d", &a);

		printf("Enter second number: ");
		scanf("%d", &b);

		switch (choice)
		{
		case 1:
			printf("Addition = %d", add(a, b));
			break;

		case 2:
			printf("Subtraction = %d", subtract(a, b));
			break;

		case 3:
			printf("Multiplication = %d", multiply(a, b));
			break;

		case 4:
			if (b == 0)
			{
				printf("Cannot divide by zero.");
			}
			else
			{
				printf("Division = %.2f", divide(a, b));
			}
			break;

		case 5:
			if (b == 0)
			{
				printf("Cannot find modulus by zero.");
			}
			else
			{
				printf("Modulus = %d", modulus(a, b));
			}
			break;

		default:
			printf("Invalid choice!");
		}

	} while (choice != 0);

	getch();
}
