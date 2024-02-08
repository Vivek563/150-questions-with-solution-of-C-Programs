#include<conio.h>
#include<stdio.h>

void table(int);

main(){	int num;printf("enter any integer  ");	scanf("%d",&num);	table(num);	getch();}void table(int num){
	int x;
	int r;
	for(x=1;x<=10;x++)
	{
		r=num*x;
		printf("%d * %d = %d\n",num,x,r);
        		
	}
	return;
}
