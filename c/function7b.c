//Question:- Write a prgram which enter two integer in function main and pass it to the UDF where they are add and the result is send back
//				to the function main, where it is printed.
//	Solution:-
			
	#include<stdio.h>
	#include<conio.h>
	
		int add(int,int);
		
		int add(int a, int b)
		{
			int c;
			c = a+b;
			return(c);
		}
		
		main()
		{
			int x,y,z;
			printf("Enter two integers:- ");
			scanf("%d%d",&x,&y);
			z=add(x,y);
			printf("sum = %d",z);
			getch();
		}
		
	
