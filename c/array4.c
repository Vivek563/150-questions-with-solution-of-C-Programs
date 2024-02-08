//	Ques:- Write a program which store seven integer in an array at run time and print only those value, which are more than 100.
//	Solution :-

	#include<stdio.h>
	#include<conio.h>
			main()
			{
				int a[7],x;
				for(x=0;x<7;x=x+1)
				{
					printf("enter a number");
					scanf("%d",&a[x]);
				}
				for(x=0;x<7;x++)
				{
					if(a[x]>100){
						printf("%d\n",a[x]);
					}
					
				}
				getch();
			}
