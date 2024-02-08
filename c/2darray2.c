//Question:- Write a program which store 9 integer into 3*3 array and print them, in the form of matrix.
//	Solution:-

 	#include<stdio.h>
	#include<conio.h>
			main()
			{
				int num[3][3];
				int r,c;
				for(r=0;r<3;r++)
				{
					for(c=0;c<3;c++)
						{
							printf("enter any integer:- ");
							scanf("%d",&num[r][c]);
						}
				}
				for(r=0; r<3;r++)
				{
					for(c=0;c<3;c++)
					{
						printf("%d\t",num[r][c]);
					}
					printf("\n");
				}
				getch();
			}
