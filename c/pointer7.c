//Question:- Write a program which store 5 integer n an array in function main and pass it to  UDF where it value are printed using pointer.
//	Solution:-

	#include<stdio.h>		
	#include<conio.h>
	
	void display(int *, int);
	main()
	{
		int a[5]={9,8,7,4,12};
		display(a,5);    //function call
		getch();
	}
	
	void display(int *ptr, int n)
	{
		int x;
		for(x=0; x<n; x++)
		{
			printf("%d\n",*ptr);
			ptr++;
		}
	}
