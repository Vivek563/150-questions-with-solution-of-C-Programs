//Question - Write a program which enter any integer than check and print, whether the given integer is a prostive no. or
  //          negative no. or zero(0).
//solution -

	#include<stdio.h>
	#include<conio.h>
	 main()
           {
				int num;
				printf("enter any number:- ");
				scanf("%d",&num);
				if(num >0)
				{
					printf("Positive number");
				}
				else if(num<0){
						printf("Negative number");
				}else{
					printf("Zero");
				}
				
				getch();
				
           } 
	
