//Ques:- Modify the privious program to print the stored value in opposite order of storage.
//	solution:-
	#include<stdio.h>
	#include<conio.h>
			main()
			{
				int a[5] = {34,12,32,56,78};
				int x;
				for(x=4;x>=0;x=x-1)
				{
					printf("%d\n",a[x]);
				}
				getch();
			}
