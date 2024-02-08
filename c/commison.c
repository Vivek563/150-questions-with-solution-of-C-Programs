//Question - Write a program which enter sales made by any saleman that calculate and print the commision, according to following
//				rules, sale up 25000, commission is 5% of sales, otherwise it is 7% of sales.
//Solution-

		#include<stdio.h>
		#include<conio.h>
	 main()
           {
				long int sales;
				float comm;
				printf("Enter sale amount :- ");
				scanf("%ld",&sales);
				if(sales<=25000)
				{
					comm = sales* 0.5;
				}
				else{
					comm = sales* 0.7;
				}
				printf("commision = %.2f Rs", comm);
				getch();
				
           }
