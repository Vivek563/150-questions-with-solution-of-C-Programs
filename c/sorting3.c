//	Question:- Write a program which store 9 integers in 3*3 array at runtime then print them in the form of matrix with the sum of its column.
//	Solution:-
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
						printf("\nEnter any number:- ");
						scanf("%d",&num[r][c]);
					}
				}
				for(r=0;r<3;r++)
				{
					for(c=0;c<3;c++)
					{
						printf("%d\t",num[r][c]);
					}
					printf("\n");
				}
		for(c=0;c<3;c++)
		{
			sum=0;
			for(r=0;r<3;r++)
			{
				sum = sum + num[r][c];
			}
			printf("%d\t",sum);
		}
		getch();
	}
