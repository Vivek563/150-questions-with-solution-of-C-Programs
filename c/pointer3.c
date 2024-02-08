	#include<stdio.h>
			#include<conio.h>
			main()
				{
					int num=100;
					int *p;
					p=&num;
					printf("Value of num = %d\n",num);
					printf("Address of num = %u\n",*p);
					printf("Address of num = %u\n",*(&num));
					getch();
			}
