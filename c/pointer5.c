//Question:- Write a prorgam which store 5 integer in an array then print them.
//	Solution:-
//			
	#include<stdio.h>		
	#include<conio.h>
	
	main()
	{
		int a[5] = {12,34,56,78,90};
		int *p,x;
		p = &a[0];  //or p = a;
		for(x=0;x<5;x++)
		{
			printf("%d\n",*p);
			p++;
		 } 
		 getch();
	}
