#include<conio.h>
#include<stdio.h>

void comm(long int);

main()
{
	long int sale;
	printf("enter the sale  ");
	scanf("%ld",&sale);
	comm(sale);
	getch();
}

void comm(long int sale)
{
	int a;
	if(sale<=25000)
	{
		a=sale*.05;
		printf("commission = %d",a);
	}
	else
	{
		a=sale*.07;
		printf("commission = %d",a);
	}
	return;
}
