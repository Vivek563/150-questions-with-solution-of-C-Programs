//Ques:- Write a program which store 5 integer in an array in function main and pass array in function main and pass it to a UDF where its
//					value are printed.
//		Solution:-

		#include<stdio.h>
		#include<conio.h>
		
				void show(int[]);
					main()
						{
							int num[10] = {109,32,23,25,67,53,86,45,34};
							show(num);
							getch();
						}
						
					void show(int b[])
						{
							int x;
							for(x=0;x<9;x++)
							{
								printf("%d\n",b[x]);
							}
							return;
						}
