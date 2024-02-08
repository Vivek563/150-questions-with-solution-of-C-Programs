//Question - Write a program which enter annual family income and of a person and if the income is from 1 lakh
//	to 2 lakh and age is also form 18 to 24 then print eligible for scholorship, otherwise print not 
//	eligible for scholorship.
	       
//    Solution - 
    
    #include<stdio.h>
	#include<conio.h>
	 main()
           {
				long int income;
				int age;
				printf("Enter income and age of a person:- ");
				scanf("%ld%d",&income,&age);
				if(income>=100000 && income<=2000000 && age>=18 && age<=24)
				{
					printf("eligible for scholorship");
				}
				else 
				{
					printf("not eligible for scholorship");
			    }
					getch();	
           } 
           
           
    
           
           
           
