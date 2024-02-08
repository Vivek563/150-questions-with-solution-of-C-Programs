//Question - Write a program which enter any integer than calculate and print its factorial.
// Solution - 
	#include<stdio.h>
	#include<conio.h>
	main()
	{
		int n, i = 1;
		long int b = 1;
		printf("Enter an Integer ");
		scanf("%d",&n);
		if(n<0)
		{
			printf("Error! Factorial of a negative num does no exist ");
		}else{
			while(i<=n)
				{
					b = b * i;
					i++;
				}
				
			printf("Factorial of %ld = %ld",n,b);
		}
		
	
		getch();
	} 	   		 
