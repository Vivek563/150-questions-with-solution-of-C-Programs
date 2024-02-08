//
//	Question:- Write a program which enter two(2) integer function main and pass them to a UDF, where they are added in the result in printed.
//	Solution:-

		#include<stdio.h>
		#include<conio.h>
		
		   void add(int,int);
		   main()
		   {
		   	int x,y;
		   	printf("Enter two integers:- ");
		   	scanf("%d%d",&x,&y);
		   	add(x,y);
		   	getch();
		   }
		   
		   void add(int a, int b)
		   {
		   	int sum;
		   	sum = a+b;
		   	printf("\nSum = %d",sum);
		   	return;
		   }
		   
		  
