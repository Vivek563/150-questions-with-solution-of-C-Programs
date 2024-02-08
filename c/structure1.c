//Question:- Write a program which define a structure called student with the member item, roll, name and phone then store the record of 1 student,
//				 at runtime and print its values.
//	Solution:- 

	#include<stdio.h>
	#include<conio.h>
	
	main()
	{
		struct student
		{
			int roll;
			char name[30];
			long phone;
		};
		struct student a;
		printf("\nEnter roll number:- ");
		scanf("%d",&a.roll);
		puts("Enter name:- ");
		fflush(stdin);
		gets(a.name);
		printf("\nEnter phone:- ");
		scanf("%ld",&a.phone);
		
		printf("%d    %s     %ld",a.roll,a.name,a.phone);
		
		getch();
	}
