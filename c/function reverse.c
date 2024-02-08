#include<conio.h>
#include<stdio.h>

void reverse(int);

main()
{
	 int num;
	printf("enter one integer");
	scanf("%d",&num);
	reverse(num);
	getch();
}

void reverse(int num)
{
	int n;
	while(num>0)
	{
		n=num%10;
		printf("%d",n);
		num=num/10;
	}
	return;
}
