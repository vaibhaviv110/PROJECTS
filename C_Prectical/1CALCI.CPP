/*create a calculator that perform addition,subtraction,multiplication,division,based on user input */
#include<conio.h>
#include<stdio.h>
 int add(int a,int b)
 {
	return a+b;
 }
 int sub(int a,int b)
 {
	return a-b;
 }
 int multiply(int a,int b)
 {
	return a*b;
 }
 float division(int a,int b)
 {
	return (float)a/b;
 }

 void main()
 {
	clrscr();
	int num;
	int a,b;


	do
	{
		printf("\n\n======= Simple Calculator=======\n");
		printf("Enter 1 For Addition +\n");
		printf("Enter 2 For Subtraction -\n");
		printf("Enter 3 For Multiplication *\n");
		printf("Enter 4 For Devision /\n");
		printf("Enter 0 for Exit \n");

		printf("Enter Your Number:");
		scanf("%d",&num);


		if(num==0)
		{
			printf("\n Calculator Colsed..");
			break;
		}
		printf("Enter First Number:");
		scanf("%d", &a);

		printf("Enter Second Number:");
		scanf("%d", &b);

		switch (num)
		{
			case 1:
				printf("Addition =%d",add(a,b));
			break;
			case 2:
				printf("Subtraction =%d",sub(a,b));
			break;
			case 3:
				printf("Multiplication =%d",multiply(a,b));
			break;
			case 4:
			if(b==0)
			{
				printf("Cannot Divide By Zero..");
			}
			else
			{
				printf("Division =%.2f",division(a,b));
			}
			break;
			default:
				printf("Invalid Number");
		}
	}
	while(num!=0);

	getch();
 }