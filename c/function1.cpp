#include<conio.h>
#include<stdio.h>
#include<string.h>

void calc(int);
main()
{
	int x;
    printf("enter a integer  ");
	scanf("%d",&x);
	calc(x);
	getch();
}
void calc(int x)
{
	int sq,cu;
	sq = x*x;
	cu = x*x*x;
	printf("square = %d\n",sq);
	printf("cube = %d\n",cu);
	return;
}
