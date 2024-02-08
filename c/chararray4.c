//Question:- Write a program which enters Roll number, name, address, phone number of a person then print them...
//				1. on different line
//				2. on the same line.
//				
//	Solution:- 

	#include<stdio.h>
	#include<conio.h>
			main()
			{
				int roll;
				char name[40], address[60];
				long int phone;
				
				printf("Enter roll number:- ");
				scanf("%d",&roll);
				
				puts("enter name:- ");
				fflush(stdin);
				gets(name);
				
				printf("Enter address:- ");
				gets(address);
				
				printf("Enter phone number:- ");
				scanf("%ld",&phone);
				
				printf("%d\n", roll);
				puts(name);
				puts(address);
				printf("%ld",phone);
				
				printf("\n%d %s %s %ld",roll,name,address,phone);
				getch();
				
			}
