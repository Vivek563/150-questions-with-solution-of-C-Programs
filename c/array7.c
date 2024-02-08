//Question - Write a prorgam which enter the number of element to store in the array at runtime then store that many element and print them together.
//	Solution :-

	#include<stdio.h>
	#include<conio.h>
			main()
			{
				int a[100], x, n;
				printf("how to many integer to store:- ");
				scanf("%d",&n);
				for(x=0; x<n; x=x+1)
				{
					printf("Enter a number:- ");
					scanf("%d",&a[x]);
				}
				for(x=0; x<n; x++)
				{
					printf("%d\n",a[x]);
				}
				getch();
			}
