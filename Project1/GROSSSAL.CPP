/* gross salary calculator*/
#include<stdio.h>
#include<conio.h>

void main()
{
	clrscr();
	float basesalary,hra,da,ta,grosssalary;
	printf("Enter Base Salary:");
	scanf("%f",&basesalary);
	printf("Enter HRA percentage: ");
	scanf("%f",&hra);
	printf("Enter DA percentage: ");
	scanf("%f",&da);
	printf("Enter TA percentage: ");
	scanf("%f",&ta);
	grosssalary=basesalary+(basesalary*hra/100)+(basesalary*da/100)+(basesalary*ta/100);
	printf("Gross Salary : RS.%.0f",grosssalary);
	getch();
}