//Question:- Write a program which enter any name then count and print its length.
//	SOlution:-

#include<stdio.h>
	#include<conio.h>
			main()
			{
				char name[300000];
				int x=0;
				puts("Enter name:- ");
				gets(name);
				
				while(name[x] !='\0')
				{
					x = x+1;
				}
				printf("Length of %s is %d",name,x);
				getch();
			}
