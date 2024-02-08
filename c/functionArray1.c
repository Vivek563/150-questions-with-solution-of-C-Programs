//Question:- Write a program which store a value in a variable in function main and pass it to a UDF where its value is printed.
//	Solution:-

#include<stdio.h>
#include<conio.h>

		void show(int);
			main()
				{
					int a = 50;
					show(a);
					getch();
				}
				
			void show(int b)
				{
					printf("%d",b);
					return;
				}
