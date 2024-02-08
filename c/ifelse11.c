/*	Question - WAP which enter sales made by any salesman than calculate and print the commision, according
				to following rules - 
				Sale                      Commission
				upto 25000                5% of sales
				25001 - 50000             7% of sales
				50001 - 75000             8% of sales
				75001 +                   10% of sales
           
    Solution - 
*/

		#include<stdio.h>
	#include<conio.h>
	 main()
           {
				long int sale;
				float comm;
				printf("Enter sales :- ");
				scanf("%ld",&sale);
				if(sale <= 25000)
				{
					comm = sale*0.05;
				}
				else if(sale > 25001 && sale<= 50000)
				{
					comm = sale*0.07;
				}
				else if(sale > 50001 && sale<= 75000)
				{
						comm = sale*0.08;
			    }else
				{
			    comm = sale*0.10;
				}
				printf("comm = Rs %.2f", comm);
					getch();	
           } 
    	       
