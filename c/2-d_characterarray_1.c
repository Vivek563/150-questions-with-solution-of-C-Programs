//Question:- Write a program which stores 5 name in the program at runtime and print them.
//		Solution:-

	#include<stdio.h>
	#include<conio.h>
			main()
			{
				char name[5][30];
				int x;
				for(x=0;x<5;x++)
				{
					puts("Enter name:- ");
					gets(name[x]);
				}
				for(x=0; x<5;x++)
				{
					puts(name[x]);
					
				}
				printf("%c",name[x]);
				getch();
			}
