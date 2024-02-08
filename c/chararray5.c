//Question:- Write a program which enter any name and print its each character on seperate line.
//	Solution:-

	#include<stdio.h>
	#include<conio.h>
			main()
			{
				char name[30];
				int x=0;
				puts("Enter name:- ");
				gets(name);
				while(name[x] !='\0')
				{
					printf("%c\n",name[x]);
					x++;
				}
				getch();
			}
