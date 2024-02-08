
 /*Question - WAP which enter sex code of a person as M or m for male, or F or f form female then test and print whether
    			the given data is of male, female or it was wrong code, enter by user.
solution - */

#include<stdio.h>
#include<conio.h>
			main()
			{
			char scode; 
			printf("Enter sex code oa M/m for male and F/f for female:- ");
			scanf("%c",&scode);
			switch(scode)
			{
				case 'M':
				case 'm':
						printf("Record is of Male");
						break;
				case 'F':
				case 'f':
						printf("Record is of FeMale");
						break;
			
				default:
				printf("Wrong data entered");
			}
				getch();
			}
			
