	#include<stdio.h>
		#include<conio.h>
		main()
			{
				int num=100;
				int *ptr;
				ptr=&num;
				printf("Value of num = %d\n",num);
				printf("Address of num = %u\n",&num);
				printf("Address of num = %u\n",ptr);
				getch();
			}
				
