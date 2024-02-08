//Question - Write a program which enter sales made by any salemans then calculate and print the commision which is 5% of sale.
//				This Program should work for 3 saleman.
	
//	Solution- 
	
		#include<stdio.h>
		#include<conio.h>
			main()
			{
				long int sale;
				float comm;
				int x = 1;
				while(x<=3)
				{
					printf("enter sales ");
					scanf("%ld",&sale);
					comm = sale * 0.5;
					printf("Commision = %.2f\n\n",comm);
					x = x + 1;
				}
				getch();
			}
