#include<conio.h>
#include<stdio.h>
#include<string.h>

void calc(int);

main()
{
	int x;
    printf("enter a integer");
	scanf("%d",&x);
	calc(x);
	getch();
}

void calc(int a)
{
	int sq,cu;
	sq=a*a;
	cu=a*a*a;
	printf("square=%d\n",sq);
	printf("cube=%d\n",cu);
	return;
}
