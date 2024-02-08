 // Question - Write a program which enter any integer and which also enters, number of times the enter number to be printed.  
//	Solution -    
		#include<stdio.h>
		#include<conio.h>
			main()
			{
				int num, x = 1, y;
				printf("Enter any Integer ");
				scanf("%d",&num);
				printf("Enter how many times ");
				scanf("%d",&y);
				while(x <= y)
				{
					printf("%d \n",num);
					x = x + 1;
				}
				getch();
			}
