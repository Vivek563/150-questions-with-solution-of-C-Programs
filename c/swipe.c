// 	write a programe which store values 10 and 20,print them, swipe them using third variable and print them.
		//solution:-
		 #include<stdio.h>
		 #include<conio.h>
			main()
			{
				int a=10,temp;
				int b=20;
				printf("%d             %d\n",a,b);
				temp=a;
				a=b;
				b=temp;
				printf("%d             %d\n",a,b);
				getch();
				
			}
