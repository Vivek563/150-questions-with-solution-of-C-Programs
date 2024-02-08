//	
//	Question:- Write a prorgam which enter princple amount(long), rate of intrest(float) and time(int) in a funcation main then pass it to the UDF where the simple 
//				intrest is calculated and printed.
//	Solution:-

			#include<stdio.h>
		#include<conio.h>
		
		   void intrest(long int,float,int);
		   main()
		   {
		    long int x;
		   	float y;
		   	int z;
		   	printf("Enter Principle amount:-  ");
		   	scanf("%ld",&x);
		   	printf("Enter Intrest:-  ");
		   	scanf("%f",&y);
		   	printf("Enter Time:-  ");
		   	scanf("%d",&z);
		   	intrest(x,y,z);
		   	getch();
		   }
		   
		   void intrest (long int x,float y,int z)
		   {
		   	
			float intrest = x*y*z/100;
		   	printf("\n Intrest = %.2f",intrest);
		   	return;
		   }
		   

		   
		   
		   
		   
		   
		   
		   
		   
		   
		   
		   
		   
		   
		   
		   
		   
		   
		   
		   
		
