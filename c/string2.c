//	Question:- Write a program which enter any name and store in the program itself. then copy it to another character 
//						array then print the values of both the character.
//						
//
//	Solution:-	

	 	#include<stdio.h>
		#include<conio.h>
			 main()
			 {
			 	char name[30]="Manish";
			 	char n[20];
			 	strcpy(n,name);
			 	puts(name);
			 	puts(n);
			 	getch();
			 }
