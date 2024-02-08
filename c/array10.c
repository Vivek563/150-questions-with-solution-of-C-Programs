//	Question:- Write a program which store 8  integer in array at run time then ask any value from the user to search then chcek and print the position of its
//				first appring in the array and if the giving value is not present in the array then give the mgs that this value is not present in the array.
//				Apply Linear searching.
//				
//	Solution :- 
	#include<stdio.h>
	#include<conio.h>
			main()
			{
				int num[8];
				int x,n,s=0;
				for(x=0;x<8;x++)
				{
					printf("Enter one integer:- ");
					scanf("%d",&num[x]);
				}
				printf("\n\n Enter Number to search:- ");
				scanf("%d",&n);
				for(x=0;x<8;x++)
				{
					if(n==num[x])
					{
						printf("\n%d is present at position %d\n",n,x+1);
						s = s+1;
						break;
					}
				}
				if(s==0)
				{
					printf("Number is not present in the array ");
				}
				getch();
			}
