//Question:- WAP, which enter the number of integer, to be astored at runtime then allocate required memory, to store that many elements in which store 
//				values and print those value.
//	solution:-		

#include<conio.h>
#include<stdio.h>
#include<stdlib.h>  //for malloc()

	main()
	{
		int n;
		int *ptr, *temp;
		int x;
		printf("Enter number of integer to store:- ");
		scanf("%d",&n);
		
		ptr = (int*) malloc(n*sizeof(int));
		temp=ptr;
		
		for(x=0;x<n;x++)
		{
			printf("\nEnter value:- ");
			scanf("%d",ptr);
			ptr++;
		}
		ptr = temp;
		for(x= 0;x<n;x++)
		{
			printf("%d\n",*ptr);
			ptr++;
		}
		getch();
	}		
	
	
	
	
	
	
	
	
