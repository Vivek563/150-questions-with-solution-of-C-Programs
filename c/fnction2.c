#include<conio.h>
#include<stdio.h>

void add(int,int);
main()
{
	int x,y;
	printf("enter two integer");
	scanf("%d",&x);
	printf("enter two integer");
	scanf("%d",&y);
	add(x,y);
	getch();
}
void add(int a, int b)
{
	int sum;
	sum=a+b;
	printf("sum=%d", sum);
	return;
}
