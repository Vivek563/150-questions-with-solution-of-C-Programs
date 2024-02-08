//Question - Write a program which enter age of a person if the age is 18 pr more then print your are adult
//			otherwise print you are minor.
//	Solution - 

#include<stdio.h>
	#include<conio.h>
	 main()
           {
				int age;
				printf("Enter age of a person :- ");
				scanf("%d",&age);
				age>=18 ? printf("You are adult") : printf("You are minor");
					getch();	
           } 
