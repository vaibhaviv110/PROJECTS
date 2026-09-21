/* using to F =9.0/5.0*celsius)+32 formula*/
#include<stdio.h>
#include<conio.h>

void main()
{
	clrscr():
	float celsius,fahrenheit;
	printf("Enter temperature in celsius: ");
	scanf("%f",&celsius);
	fahrenheit = (9.0/5.0*celsius)+32;
	printf("temperature in fahrenheit: %.1f",fahrenheit);
	getch();
}