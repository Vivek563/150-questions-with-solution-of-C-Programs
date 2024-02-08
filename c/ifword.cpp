/*Question - Write a program which enter the number of words to be send by teligram than calculate and print teligram charges
						according to following rules.
						upto 10 words, total charges are 7.5, for each extra words, the charge is Rs 1.5 for per word extra.
	solution -
	*/
		#include<stdio.h>
		#include<conio.h>
	 main()
           {
				int words;
				float charges;
				printf("How many words :- ");
				scanf("%d",&words);
				if(words <= 10)
				{
					charges = 7.5;
				}
				else{
					charges = 7.5 + (word - 10) * 1.5;
				}
				printf("charges = %.2f Rs", charges);
				getch();
				
           }
