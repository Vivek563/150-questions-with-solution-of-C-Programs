//Question:- Write a prorgam which enter any name in function main and pass it to a UDF, where its each character is printed on seperate line. 
//				using pointer
//	Solution:-   
#include<stdio.h>
#include<conio.h>

	void show(char *ptr);
	
	main()
	{
		char name[30];
		puts("Enter Name:- ");
		gets(name);
		show(name);
		getch();
		}
		
		void show(char *ptr)
		{
			while(*ptr != '\0')
			{
				printf("%c\n",*ptr);
				ptr++;
			}
		}
