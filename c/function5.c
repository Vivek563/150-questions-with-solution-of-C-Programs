
//	Question:- Write a program which enter any integer in function main and pass it to the UDF where its multiplication table is printed in table in table format.
//	Solution:-

	#include<stdio.h>
	#include<conio.h>
		
		void table(int);
		main(){
			
					int num; 
					printf("Enter any integer:- ");
					scanf("%d",&num);
					table(num);
					getch();
		}
		
		void table(int num)
		{
			int x,r;
			for(x=1;x<=10;x++)
			{
				r=num;
				r=x*num;
				printf("%d * %d = %d\n",num,x,r);
			}
			return;
		}
