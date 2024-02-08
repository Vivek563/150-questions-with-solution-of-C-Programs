//Question:- Write a prgram which enter two integer in function main and pass it to the UDF where they are add and the result is send back
//				to the function main, where it is printed.
//	Solution:-
			
	#include<stdio.h>
	#include<conio.h>
	
		void add(int,int);
		
		main()
		{
			int x, y;
			printf("Enter two integer:- ");
			scanf("%d%d",&x,&y);
			add(x,y);
			getch();
		}
		
		void add(int a, int b){
			int sum;
			sum = a + b;
			printf("\nSum = %d", sum);
			return;
		}
