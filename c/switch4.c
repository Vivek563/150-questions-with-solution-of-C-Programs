/*Question- Write a MENU DRIVEN program which enter two integer and perform any one of the giveen arthemethical calculatin, depending one
			of the user choice from menu.
			1. ADDITION
			2. SUBSTRACTION
			3. MULTIPLICATION
			4. DIVISION
			
	Solution - 
*/


#include<stdio.h>
#include<conio.h>
			main()
			{
			int a,b,choice,r;
			float p;
			printf("Enter two Number :- ");
			scanf("%d%d",&a,&b);
			
			printf("1 - ADDITION\n");
			printf("2 - SUBSTRACTION\n");
			printf("3 - MULTIPLICATION\n");
			printf("4 - DIVISION\n");
			
			scanf("%d",&choice);
			switch(choice)
			{
				case 1:
						r = a+b;
						printf("%d  + %d = %d\n",a,b,r);
						break;
				case 2:
						r = a- b;
						printf("%d  - %d = %d\n",a,b,r);
						break;
				case 3:
						r = a*b;
						printf("%d  * %d = %d\n",a,b,r);
						break;
				case 4:
						r = a%b;
						printf("%d  %% %d = %d\n",a,b,r);
						break;
			
				default:
				printf("Invalid choise");
			}
				getch();
			}
