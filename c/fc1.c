//Ques - Write a program which enter 5 integer and the end, print the followning summary-
//	 			number of number above 100 are ......
				 
//		Solution -

	#include<stdio.h>
	#include<conio.h>
	 main()
           {
				int num,x,c=0;
				for(x=1;x<=5;x=x+1)
				{
				printf("Enter one integer:- ");	
				scanf("%d", &num);
				if(num>100)
				{
					c = c + 1;
				}
				}
				printf("number of the above 100 are %d",c);
				getch();
				
           }
