//Question:- Write a program which enter any integer in function main and pass it to a UDF, where it is printed in reverse order.
//	Solution:-

		#include<stdio.h>
		#include<conio.h>
		
		Reverse(int n)
		{
			int a = 0;
			while(n > 0)
			{
				a = a*10 + n%10;
				n /= 10;
			}
			return a;   
		}
		main()
		{
			int rev,num;
			printf("enter any number:- ");
			scanf("%d",&num);
			rev = Reverse(num);
			printf("The reverse number is %d",rev);
			getch();
		}
