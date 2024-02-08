//	Question:- Write a program which store 5 integer in an array at runtime and print them.
//	Solution:- 

	#include<stdio.h>
	#include<conio.h>
			main()
			{
				int a[5],x;
				for(x=0;x<5;x=x+1)
				{
					printf("enter a number");
					scanf("%d",&a[x]);
				}
				for(x=0;x<5;x++)
				{
					printf("%d\n",x[a]);
				}
				getch();
			}
