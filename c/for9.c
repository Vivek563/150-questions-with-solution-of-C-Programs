//Question -  Enter the number of term and that many term of series should be generated and printed.
// Solution - 

	#include<stdio.h>
	#include<conio.h>
	main()
	{
		int  a= 1, b=1, c,x,n;
		printf("How many term >> ");
		scanf("%d",&n);
		printf("%d\t%d",a,b);
		for(x=1; x<=n; x=x+1)
		{
			c = a + b;
			printf("\t%d",c);
			a=b;
			b=c;
		}
	
		getch();
	} 
