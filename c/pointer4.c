	#include<stdio.h>
			#include<conio.h>
			main()
				{
					int a=100;
					int *p;
					int **ptr;
					p=&a;
					ptr=&p;
					printf("Value of a = %d\n",a);
					printf("value of a = %d\n",*(&a));
					printf("value of a = %d\n",*p);
					printf("value of a = %d\n",**ptr);
					getch();
			}
