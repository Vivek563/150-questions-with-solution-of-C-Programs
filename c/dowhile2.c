//Question :- Write a prorgam which forces the user, to enter any positive value and print it. the program sholud keep on asking
//			the number again and again, till user do not enter any positive number.
//Solution :- 


	#include<stdio.h>
	#include<conio.h>
	main()
	{
		int num;
		do{
			printf("Enter any positive integer ");
			scanf("%d",&num);
		}
		while(num<0);
		printf("%d\n",num);
		getch();
	}
