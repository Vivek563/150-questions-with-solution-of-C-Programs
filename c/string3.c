//	Question:- Write a program which store 2 name in the program itself, print them, swipe their value then again print the swipe value.
//	Solution:-

	#include<stdio.h>
	#include<conio.h>
			 main()
			 {
			 	char name[30] = "Manish";
			 	char n[20] = "Saina";
			 	char temp[20];
			 	puts(name);
			 	puts(n);
			 	printf("\n");
			 	
			 	strcpy(temp,name);
			 	strcpy(name,n);
			 	strcpy(n,temp);
			 	
			 	puts(name);
			 	puts(n);
			 	getch();
			 }
