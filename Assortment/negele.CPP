/*negative elements in 1D array*/
#include<stdio.h>
#include<conio.h>
void main()
{
	clrscr();
	int a[5],n,i;
	printf("Enter The array size: ");
	scanf("%d",&n);
	printf("Enter Array element:\n");
	for(i=0;i<n;i++)
	{
		printf("a[%d] =",i);
		scanf("%d",&a[i]);
	}
	printf("\n Negative elements from an array:");
	for(i=0;i<n;i++)
	{
		if(a[i]<0)
		{
			printf("%d",a[i]);
		}
	}






	getch();
}