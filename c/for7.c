//Question - Write a prorgam which enter two integer. for example a and b then calculate and print its power a power b.
// Solution -
 
 	#include<stdio.h>
	#include<conio.h>
	main()
	{
		int n,p,i,j=1;
		printf("Enter Number>> ");
		scanf("%d",&n);
		printf("Enter Power>> ");
		scanf("%d",&p);
		for(i=1;i<=p; i++)
		{
			j = j * n;
		}
		printf("\n\n Power of %d by %d is %d",n,p,j);
		getch();
	} 
