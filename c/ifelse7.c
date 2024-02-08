//Question - Write a program which enter sex code of a person as M or m for male, F or f for female and test and print, wheather
//				the given data is of male, female or it was worng code enterted by the user.
				
	//solution - 
	#include<stdio.h>
	#include<conio.h>
	 main()
           {
				char scode;
				printf("Enter sex code as M/m for male, f/F for female:- ");
				scanf("%c",&scode);
				if(scode == 'm')
				{
					printf("Records is of male");
				}
				else if (scode == 'M')
				{
					printf("Records is of male");
				}else if (scode == 'f')
				{
					printf("Records is of female");
				}else if (scode == 'F')
				{
					printf("Records is of Female");
				}else{
					printf("worng data enter by user ");
				}
				
				getch();
				
           } 
