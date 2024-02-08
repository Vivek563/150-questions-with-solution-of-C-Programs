#include<stdio.h>
#include<conio.h>

main()
			{
				int num = 100;
				int *ptr;
				ptr=&num;
				printf("Adress = %u\n",ptr);
				ptr = ptr + 1;   //pointer arthemetic
				printf("Address = %u\n",ptr);
				ptr = ptr-2;  
				printf("Address = %u",ptr);
				getch();
				}
