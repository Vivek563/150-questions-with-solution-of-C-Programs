	
//Question :- Write a program which enter any integer and print in reverse order.
// solution -

	#include<stdio.h>
	#include<conio.h>
	main()
	{
		long int num;
		int n;
		printf("Enter any Integer ");
		scanf("%ld",&num);
		while(num>0)
		{
			n = num % 10;
			printf("%d",n);
			num = num / 10;	
		}
		getch();
	} 
