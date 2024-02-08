//Question:- Modify the program, so that it check and print the position of all the apperences of the given value in the array and at the end also print no. of 
//				time the value is present in the array.
//				
//	solution:- 
	#include<stdio.h>
	#include<conio.h>
			main()
			{
				int num[8];
				int x,n,s=0;
				for(x=0;x<8;x++)
				{
					printf("Enter one integer:- ");
					scanf("%d",&num[x]);
				}
				printf("\n\n Enter Number to search:- ");
				scanf("%d",&n);
				for(x=0;x<8;x++)
				{
					if(n==num[x])
					{
						printf("\n%d is present at position %d\n",n,x+1);
						s = s+1;
						break;
					}
				}
				if(s==0)
				{
					printf("%d is not present in the array",n);
				}
			else{
				printf("%d appear %d times", n,s);
			}
			getch();
			
		}
			
			
			
			
			
