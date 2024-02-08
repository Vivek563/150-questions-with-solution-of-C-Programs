//	Question:- Write a program which enter any name and print it in resverse order
//	Solution:-  
//				1. count length
//				2. Then set a loop, which work from length -1 to 0

	#include<stdio.h>
	#include<conio.h>
			main()
			{
				char name[30];
				int x=0,i;
				
				puts("Enter name:- ");
				gets(name);
				
				while(name[x] !='\0')
				{
					x++;
				}
				for(i=x-1;i>=0;i--)
				{
					printf("%c",name[i]);
				}
				
				getch();
			}
