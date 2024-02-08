//
//    Question:- Write a program which develop and implements a function called mystrlen, which will equivalent to strlen function. apply pointer
//	Solution:-

#include<stdio.h>
#include<conio.h>

	int mystrlen(char *);
	
	main()
	{
		char name[30];
		int l;
		puts("Enter Name:- ");
		gets(name);
		l = mystrlen(name);
		printf("Length = %d",l);
		getch();
		}
		
		int mystrlen(char *ptr)
		{
			int t=0;
			int l;
			while(*ptr != '\0')
			{
				ptr++;
				l++;
			}
			return(l);
		}
	
