//Question:- Write a program, which enters marks in three subject of a students and calculate its average. if the average
  //  			is 33 or more than print pass, otherwise print fail.
  
  
  	#include<stdio.h>
	#include<conio.h>
	 main()
           {
				int a,b,c,d;
				printf("Enter marks of three subject:- ");
				scanf("%d%d%d",&a,&b,&c);
				d = (a+b+c)/3;
				if(d>=33)
				{
					printf("you are pass");
				}
				else{
					printf("You are fail");
				}
				
				getch();	
           }
