//Question - Write a program which enter any integer then check and print, wheather it is prime number or no.
//Solution -  

	#include<stdio.h>
	#include<conio.h>
	main()
	{
		int m, p =2;
		printf("Enter Number>> ");
		scanf("%d",&m);
		while(p<m)
		{
			if(m % p == 0)
			{
				break;
			}
			p++;4
		}
		if(p == m)
		{
			printf("Given number is a prime number ");
		}else{
			printf("Given number is not a prime number ");
		}
		getch();
	} 
