//
//	Question:- Write a C Program which store 9 integer in a 3*3 Array and print it in transpose matrix.
//	Solution:- 

	#include<stdio.h>
	#include<conio.h>
			main()
			{
				int a[3][3], b[3][3],r,c;
				for(r=0;r<3;r++)
				{
					for(c=0;c<3;c++){
						printf("Enter one integer:- ");
						scanf("%d",&a[r][c]);
					}
				}
				for(r=0;r<3;r++)
				{
					for(c=0;c<3;c++){
						b[c][r]=a[r][c];
					}
				}
				for(r=0;r<3;r++)
				{
					for(c=0;c<3;c++){
						printf("%d\t",a[r][c]);
					}
					printf("\n");
				}
				printf("\n\nTranspose matrix\n\n");
				for(r=0;r<3;r++)
				{
					for(c=0;c<3;c++){
						printf("%d\t",b[r][c]);
					}
				printf("\n");	
				}
				getch();
			}
