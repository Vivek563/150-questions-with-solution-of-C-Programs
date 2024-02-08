//Question:- Write a program which store 9 integer into 3*3 array and print them, in the form of matrix with the sum of its rows.	
//	solution:-
	#include<stdio.h>
	#include<conio.h>
			main()
			{
				int num[3][3];
				int r,c,sum;
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
					sum = 0;
					for(c=0;c<3;c++)
					{
						printf("%d\t",num[r][c]);
						sum = sum + num[r][c];
					}
					printf("\n");
					printf("\t\tsum of above number =%d\n",sum);
				}
				getch();
			}
