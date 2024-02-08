//Ques:- Write a program which store 5 integer in an array then copy them to another array then print the value of both the arrays.
//	solution:-

	#include<stdio.h>
	#include<conio.h>
			main()
			{
				int a[5]={34,12,32,56,78};
				int b[5];
				int x;
				for(x=0;x<5;x=x+1)
				{
					b[x] = a[x];
					printf("%d \t %d \n",a[x],b[x]);
				}
				getch();
			}
