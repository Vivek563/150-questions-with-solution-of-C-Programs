//Question:- Write a prorgam which store 5 integer in an array, using pointer and print the stored value, using pointer
//	Solution:-

	#include<stdio.h>		
	#include<conio.h>
	
	main()
	{
		int a[5];
		int *ptr,x;
		ptr = a;  //or p = a;
		for(x=0;x<5;x++)
		{
			printf("\nEnter Value:- ");
			scanf("%d",ptr);
			ptr++;
		 } 
		 ptr = a;   //moves pointer to starting of array
		 for(x=0;x<5;x++)
		 {
		 	printf("%d\n",*ptr);
		 	ptr++;  //pointer arthemetic
		 }
		 getch();
	}
