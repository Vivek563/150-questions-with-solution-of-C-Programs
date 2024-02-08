//Question:- write a program which stores 3 names and print first and the last character of each name.
//	Solution:-

	#include<stdio.h>
	#include<conio.h>
			main()
			{
				char name[5][30]={"Manish","Chinki","Sania"};
				int x,b;
				
				for(x=0;x<3;x++)
				{
					b=strlen(name[x]);
					printf("%c  %c\n",name[x][0],name[x][b-1]);
					
				}
				getch();
			}
