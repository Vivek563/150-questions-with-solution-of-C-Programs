//Question:- Write a program which stores roll no. and total marks of 5 student then arrange them in the form of merit list.
//solution:-	
	#include<stdio.h>
	#include<conio.h>
			main()
			{
				int roll[5] = {101,102,103,104,105};
				int total[5] = {67,45,76,98,66};
				int x,y,temp;
				for(x=0;x<4;x=x+1)
				{
					for(y=x+1;y<5;y=y+1)
					{
					if(total[x]<total[y])
					{
						temp = roll[x];
						roll[x] = roll[y];
						roll[y] = temp;
						temp = total[x];
						total[x] = total[y];
						total[y] = temp;
					}
					}
				}
				printf("\t      Merit list\n");
				printf("\n");
				printf("\tRoll No.\tTotal\n");
				for(x=0;x<5;x=x+1)
				{
					printf("\t  %d\t\t  %d\n",roll[x],total[x]);
				}
				getch();
			}
