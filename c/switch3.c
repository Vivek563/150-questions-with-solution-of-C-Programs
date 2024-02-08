/*Question - Write a MENU DRIVEN program, which calculate and print the area of squar or circle depending on the users coice
				from the menu.
		step 1 -
				  1. ...........Area of Square
				  2. ...........Area of circle
				       Enter your choice?
					   
		Step 2 - 
				Depending on choice it should ask:
				   Enter side of square?
				   or
				   Enter radius of circle?
				   
		Step 3 -
				output As-
				Area of Square whose side is ..... is .....
				or
				Area of circle whose Radius is ...... is ......
				
		Solution -
		*/
		
		
#include<stdio.h>
#include<conio.h>
			main()
			{
			float a, b;
			int c;
			printf("            \n\n ");
			printf("1 -  Area of Square\n\n");
			printf(" 2 -  Area of circle\n\n");
			printf("Enter your Choice ?");
			scanf("%d",&c);
			switch(c)
			{
				case 1:
						printf("Enter side of Square ");
						scanf("%f",&a);
						b = a*a;
						printf("Area of square whose side is %.2f is %.2f",a,b);
						break;
				case 2:
						printf("Enter Radius of circle ");
						scanf("%f",&a);
						b = 3.14*a*a;
						printf("Area of circle whose radius is %.2f is %.2f",a,b);
						break;
			
				default:
				printf("Invalid choise");
			}
				getch();
			}        
