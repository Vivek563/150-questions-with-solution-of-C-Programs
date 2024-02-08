//Question:- Write a program which declerate an array of 3*3 in function main then develop an implement following function:-
//				1. Entry to store data in array
//				2. Show to print the data in the form of matrix.
//	Solution:-
	#include<stdio.h>
	#include<conio.h>
	
			void entry(int[3][3]);
			void show(int[3][3];);
				main()
					{
						int num[3][3];
						entry(num);
						show(num);
						getch();
					}
					
				void entry(int a[3][3])
					{
						int r,c;
						for(r=0;r<3;r++)
						{
							for(c=0;c<3;c++)
							{
								printf("\nEnter any number:- ");
								scanf("%d",&a[r][c]);
							}
							
						}
					}
				
				void show(int b[3][3])
				{
					int r,c;
					for(r=0;r<3;r++)
					{
						for(c=0;c<3;c++)
						{
							printf("%d\t",b[r][c]);
						}
						printf("\n");
						
					}
				}
				
				
