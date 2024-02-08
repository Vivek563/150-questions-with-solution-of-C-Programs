//Question - Write a progam which enter starting number, ending number and different number of a series then generated and print 
//that series.
//	solution -

		#include<stdio.h>
		#include<conio.h>
			main()
			{
				int a,b,c;
				printf("Enter starting no. ");
				 scanf("%d",&a);
				printf("Enter the ending no. ");
				scanf("%d",&b);
				printf("Enter the difference no. ");
				scanf("%d",&c);
				while(a <= b)
				{
					printf("%d \n",a);
					a = a + c;
				}
				getch();
			}
