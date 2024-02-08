// question - Write c C program which enter any integer than calculate and print its square and cube.
		//solution:-
		 #include<stdio.h>
		 #include<conio.h>
			main()
			{
			int a,b,c;
			printf("enter a integer  ");
			scanf("%d",&a);
			b = a * a;
			c = a * a * a;
			printf("square of the given number is %d\n",b);
			printf("Cube of the given number is %d",c);
			getch();
				
			}
