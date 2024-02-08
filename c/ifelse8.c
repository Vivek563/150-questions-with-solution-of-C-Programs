   // Question - Write a program which enter any code in integer and if it is 5,7,11 or 24 then print 
   //Right code otherwise print worng code.
//Solution -
	#include<stdio.h>
	#include<conio.h>
	 main()
           {
				int a;
				printf("Enter any integer code:- ");
				scanf("%d",&a);
				if(a == 5 || a == 7 || a == 11 || a == 24)
				{
					printf("Right code");
				}
				else 
				{
					printf("Worng code");
			    }
					getch();	
           } 
