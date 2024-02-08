#include<conio.h>
#include<stdio.h>

void entry(int[]);
void sort(int[]);
void show(int[]);

main()
{
	int num[5];
	entry(num);
	show(num);
	sort(num);
	printf("\n\n");
	show (num);
	getch();
}

void entry(int n[n])
{
	int x;
	for(x=0;x<4;x++)
	{
		for(y=x+1;y<5;y++)
		{
			if(n[x]>n[y])
			{
				temp=n[x];
				n[x]=n[y];
				n[y]=temp;
			}
		}
	}
}

void show (int d[])
{
	int a;
	for(a=0;a<;a++)
	{
		printf("%d",d[a]);
	
	}
}
