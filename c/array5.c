//	Ques:- Write a program which store roll number(int) and total marks(float) of a student at runtime and print them together, in the form of list.
//	solution :-
//	

	#include<stdio.h>
	#include<conio.h>
			main()
			{
				int roll[5],x;
				float total[5];
				for(x=0;x<5;x++)
				{
					printf("enter roll number and total marks of students");
					scanf("%d%f",&roll[x],&total[x]);
				}
				for(x=0;x<5;x++)
				{
					printf("\n%d\t\t%.2f",roll[x],total[x]);
				}
				getch();
			}
