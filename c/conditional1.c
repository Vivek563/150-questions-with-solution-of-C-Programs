//Question - Write a program which enter any integer then check and print whether it is odd no. or even no.
//	solution -  
#include<stdio.h>
	#include<conio.h>
	 main()
           {
				int a;
				printf("Enter any integer :- ");
				scanf("%d",&a);
				a=(a%2 == 0) ? printf("Even number") : printf("odd number");
				getch();	
           } 
