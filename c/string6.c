//Question:- Write a program which enter any string then check and print wheather that string is palindrome or not.
//	Solution:-

	#include<stdio.h>
	#include<string.h>
			 main()
			 {
			 	char str1[20];
			 	char str2[20];
			 	int x;
			 	 	
			 	puts("Enter any string:- ");
			 	gets(str1);
			 	strcpy(str2,str1);
			 	strrev(str1);
			 	x=strcmp(str1,str2);
			 	if(x==0)
			 	{
			 		printf("Given string is palindrome");
				 }else{
				 	printf("Given string is not palindrome");
				 }
			 	getch();
			 }
