//question - Write a program which enter the radius of a circle than calculate and print area of circle.
//	Solution - 
		#include<stdio.h>
		 #include<conio.h>
		 #define PI 3.14
		 
			main()
			{
			float r,b;
			printf("enter a integer  ");
			scanf("%f",&r);
			b = PI * r * r;
			printf("Area of circle is %2f",b);
			getch();
				
			}
			
			
		//	or
	/*		
				#include<stdio.h>
		 #include<conio.h>
		 
			main()
			{
			float r,b;
			printf("enter a integer  ");
			scanf("%f",&r);
			b = 3.14 * r * r;
			printf("Area of circle is %2f",b);
			getch();
				
			}
		*/	
