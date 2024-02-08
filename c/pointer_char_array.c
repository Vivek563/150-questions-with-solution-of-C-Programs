//
//	Question:- Write a prorgam which store a string in a character array in the program itself and print its each character on seperate line.
//	Solution:-


#include<stdio.h>
#include<conio.h>

	main()
	{
		char name[20]="INDIA";
		char *ptr;
		ptr = name;
		while (*ptr != '\0')
		{
			printf("%c\n",*ptr);
			ptr++;
		}
		getch();
	}
