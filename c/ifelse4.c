//question - Write a program which enter any integer and if it is less than 5 than calculation and print its cude otherwise
  //  			calculate and prints its square.
  //  Solution - 
  			#include<stdio.h>
			#include<conio.h>
	 				main()
     				      {
							int a,b;
							printf("Enter any integer:- ");
							scanf("%d",&a);
								if(a<5)
									{
										b = a*a*a;
										printf("cube of %d is %d",a,b);
									}
									else{
										b = a*a;
										printf("square of %d is %d",a,b);
									}
				
									getch();
				
         				  }
