/* question - Write a program which enter two integer then check and print that how many times the first integer can be
			divided by the second integer and what will be left.
	solution - */
	    #include<stdio.h>
		 #include<conio.h>
		 
			main()
			{
			int a,b,c,d;
			printf("enter two integer:  ");
			scanf("%d %d",&a,&b);
			c = a / b;
			d = a % b;
			printf("%d can be divided by %d, %d Times and %d will be left",a,b,c,d);
			getch();
				
			}
			
