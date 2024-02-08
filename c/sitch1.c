// Question - Write a program which enter any integer from 1-3 and print in word if the given value is beyond the given 
    //  range then it gives the message value out of rang.
    
// solution - 
#include<stdio.h>
#include<conio.h>
			main()
			{
			int num; 
			printf("Enter any integer:- ");
			scanf("%d",&num);
			switch(num)
			{
				case 1:
				printf("one");
				break;
				case 2:
				printf("Two");
				break;
				case 3:
				printf("Three");
				break;
				default:
				printf("value out of rang ");
			}
				getch();
			}
			
