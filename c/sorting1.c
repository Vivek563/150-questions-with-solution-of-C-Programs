//Question:- Write a program which store 4 integer in an array then arrange them in accending order.
//	Solution:-
	#include<stdio.h>
	#include<conio.h>
			main()
			{
				int a[4] = {34,12,198,2};
				int x,y,temp;
				
				for(x=0;x<3;x++)
				{
					for(y=x+1;y<4;y++)
					{
						if(a[x] >= a[y])
						{
							temp = a[x];
							a[x] = a[y];
							a[y] = temp;
						}
					}
				}
				for(x=0;x<4;x++)
				{
					printf("%d\t",a[x]);
				}
				getch();
			}
