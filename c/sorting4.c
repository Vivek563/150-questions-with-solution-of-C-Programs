//	Question:- Write a program which store 9 integer in a 3*3 array at the runtime and print them its sum of diagonals.
//	solution:-
//	
	
	#include<stdio.h>
	#include<conio.h>
			main()
			{
				int num[3][3];
				int r,c,d1=0,d2=0;
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
					d1=d1+num[r][r];
					d2 = d2 +num[r][2-r];
				}
				printf("sum of diagonal 1 = %d\n",d1);
				printf("sum of diagonal 2 = %d\n",d2);
		getch();
	}
