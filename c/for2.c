//Question - Write a program which enter any integr and which also enters number of times the enter number to be printed.
//Solution -
	#include<stdio.h>
	#include<conio.h>
	main()
	{
		int num, x=1, y;
		printf("Enter any Integer ");
		scanf("%d",&num);
		printf("Enter no. of time to print ");
		scanf("%d",&y);
		for(x=1; x<=y; x = x+1)
		{
			printf("%d\n",num);
		}
		getch();
	} 
