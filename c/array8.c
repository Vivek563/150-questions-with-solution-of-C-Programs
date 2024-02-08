//Question:- Write a program which enter and store n integer in an array then at the end the following summary - 
//				1. sum of entered number
//				2. Average of entered no.
//	Solution:-	
	
	#include<stdio.h>
	#include<conio.h>
			main()
			{
				int a[100], x, n, sum = 0;
				float avg = 0;
				printf("how to many integer to store:- ");
				scanf("%d",&n);
				if(x<100)
				{
					for(x=0; x<n; x++)
					{
						printf("Enter one integer:- ");
						scanf("%d",&a[x]);
						sum = sum + a[x];
					}
					avg = sum / (n);
					printf("Number of entered num = %d\n",n);
					printf("Their sum = %d\n",sum);
					printf("Their average is = %.2f\n",avg);
				}
				else{
					printf("Error! no. of element to store is more than the array size");
				}
				getch();
			
			}
