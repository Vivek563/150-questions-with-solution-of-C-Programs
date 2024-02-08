//	Question:- Write a program which decleared an array who store name in function main then develop and implement the following:-
//				1. Enter name
//				2. seperate to print each character of name on seperated line.			
//	Solution:-	

#include<stdio.h>
	#include<conio.h>
	
			void entry(char[]);
			void seperate(char[]);
			int mystrlen(char n[]);
				main()
					{
						int x;
						char name[30];
						entry(name);
						seperate(name);
						x = mystrlen(name);
						printf("%d\n",x);
						getch();
					}
					
				void entry(char p[])
					{
						puts("Enter name:- ");
						gets(p);
					}
				
				void seperate(char n[])
				{
					int x=0;
					while(n[x] != '\0')
					{
						printf("%c\n",n[x]);
						x++;
					}
				}
				
				int mystrlen(char n[])
				{
					int x=0;
					while(n[x] != '\0')
					{
						
						x++;
					}
					printf("\n");
					return(x);
				}
				
				
				
				
				
				
				
				
				
				
				
				
