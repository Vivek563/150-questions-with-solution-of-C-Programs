//Question :- Write a program which enter any integer than calculate and print the sum of its digit.
//Solution :-    
#include<stdio.h>
	#include<conio.h>
	main()
	{
		long int num;
		int n, sum = 0;
		printf("Enter any Integer ");
		scanf("%ld",&num);
		printf("Sum of digit of %ld is ",num);
		while(num>0)
		{
			n = num % 10;
			sum = sum + n;
			num = num / 10;	
		}
		printf("%d",sum);
		getch();
	} 	   
