  
  //Question - Write a program which enter two integer then perform following calculation on them.
	//			=>  Addition, Substraction, Multiply, division, Mod.
  
  
    #include<stdio.h>
	#include<conio.h>
	 main()
           {
				int a,b,c,d,e,f;
				float g;
				printf("Enter two integer:- ");
				scanf("%d%d", &a,&b);
				c = a + b;
				d = a - b;
				e = a * b;
				f = a % b;
				g = a / b;
				
				printf("%d + %d = %d\n",a,b,c);
				printf("%d - %d = %d\n",a,b,d);
				printf("%d * %d = %d\n",a,b,e);
				printf("%d %% %d = %d\n",a,b,f);
				printf("%d / %d = %.2f\n",a,b,g);
				getch();
				
           }
