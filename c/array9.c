//Question:- Write a program which enter and store seven integer in an array then check and print the maximum value which is stored in array.
//	solution :-

	#include<stdio.h>
	#include<conio.h>
			main()
			{
				int a[7], x, max;
				for(x=0; x<7; x=x+1)
				{
					printf("Enter number:- ");
					scanf("%d",&a[x]);
				}
				max = a[0];
				for(x=0; x<7; x=x+1)
				{
					if(a[x] > max)
					{
						max = a[x];
					}
				}
				printf("maximum value = %d", max);
				getch();
			}
