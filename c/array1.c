//Ques:- 	Write a program which store 5 integer itself an print them together in the form of list.
//	Solution:-

	#include<stdio.h>
	#include<conio.h>
			main()
			{
				int a[5] = {34,12,32,56,78};
				int x;
				for(x=0;x<5;x=x+1)
				{
					printf("%d\n",a[x]);
				}
				getch();
			}
