//Question- Write a program which enter the age of a person and if the age is 18 or more than 18 then print
//				you are adult, otherwise print you are minor.
//		Solution:-

	#include<stdio.h>
	#include<conio.h>
	 main()
           {
				int a;
				printf("enter age:- ");
				scanf("%d",&a);
				if(a>=18)
				{
					printf("you are adult");
				}
				else{
					printf("You are minor");
				}
				
				getch();
				
           }
