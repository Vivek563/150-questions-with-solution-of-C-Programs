//Question:- Write a program which enter two string then check and print whether both the string are equal or not, it not then print which string come first
//				and which should come next.
//	Solution:-
	#include<stdio.h>
	#include<conio.h>
	#include<string.h>
			 main()
			 {
			 	char str1[20];
			 	char str2[20];
			 	int x;
			 	 	
			 	puts("Enter name:- ");
			 	gets(str1);
			 	puts("Enter name:- ");
			 	gets(str2);
			 	x=strcmp(str1,str2);
			 	if(x==0)
			 	{
			 		printf("both the string are equal");
				 }else if(x>0){
				 	printf("First string come after second string");
				 }else{
				 	printf("First string come before second string");
				 }
			 	getch();
			 }
