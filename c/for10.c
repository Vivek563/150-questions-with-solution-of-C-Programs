//Question - A LUCAS series is given 1, 3, 4, 7, 11, 18, 29.... The third number is sum of previous two number.
//			 Write a program to print first 10 number of lucas series.
// Solution - 
	#include<stdio.h>
	#include<conio.h>
	main()
	{
		int  a= 1, b=3, c,x,n;
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
