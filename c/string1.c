//Question:- Write a program which enter any name then count and print its lenght.
//	solution:-

	#include<stdio.h>
	#include<conio.h>
			 main()
			 {
			 	char name[30];
			 	int x;
			 	printf("Enter any name:- ");
			 	gets(name);
			 	x = strlen(name);
			 	printf("Length of %s is %d\n",name,x);
			 	printf("Length of %s is %d",name,strlen(name));
			 	getch();
			 }


