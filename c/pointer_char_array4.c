//Question:- Write a prorgam which define and implement of a function called mystrcpy which work equavalent to strcpy function apply pointer.
//	Solution:-

#include<stdio.h>
#include<conio.h>

	void mystrcpy(char *, char *);
	
	main()
	{
		char name[30]="India";
		char n[30];
		mystrcpy(n,name);
		puts(name);
		puts(n);
		getch();
		}
		
		void mystrcpy(char *p1, char *p2)
		{
			while(*p2 != '\0')
			{
				*p1=*p2;
				p1++;
				p2++;
			}
			*p1='\0';
			
		}

