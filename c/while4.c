//	question :- Write a program which entre the no. of odd no. to be generated and printed and that may odd no. should be generated 
       //and printed. 
// solution - 
        #include<stdio.h>
		#include<conio.h>
			main()
			{
				int x = 1, y = 1, n;
				printf("How many odd number ");
				scanf("%d", &n);
				while(x <= n)
				{
					printf("%d\n",y);
					y = y + 2;
					x = x + 1
				}
				getch();
			}		
