/*Question:- Write a program which enter any integer and print its multiplication table in table format.
         format- 
                 8 * 1 = 8
    	
Solution - */

	#include<stdio.h>
	#include<conio.h>
	main()
	{
		int num, x,r;
		printf("Enter any Integer to print table ");
		scanf("%d",&num);
		printf("Table of %d\n\n",num);
		for(x=1; x<=num; x++)
		{
			r = num * x;
			printf("%d * %d =  %d\n",num,x,r);
		}
		getch();
	} 
