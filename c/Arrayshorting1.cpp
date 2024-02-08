#include<stdio.h>
#include<conio.h>

main()
{
	int a[5];
	int x,y,temp;
	printf(enter five no. to sort the data:- );
	scanf("%d",a[5]);
	for(x=0;x<4;x++)
	{
		for(y=x+1;y<5;y++)
		{
			if(a[x]>=a[y])
			{
				temp=a[x];
				a[x]=a[y];
				a[y]=temp;
			}
		}
	}
	for(x=0;x<5;x++)
	{
		printf("%d\n",a[x]);
	
	}
	getch();
}
