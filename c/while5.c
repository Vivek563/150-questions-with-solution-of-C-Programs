//question - Write which enter any integer and print it 5 times with serial no.
//	Solution - 
				#include<stdio.h>
		#include<conio.h>
			main()
			{
				int num = 1, x = 1;
				printf("Enter any Integer ");
				scanf("%d", &num);
				while(x <= 5)
				{
					printf("%d\n",num);
					x = x + 1;
				}
				getch();
			}
