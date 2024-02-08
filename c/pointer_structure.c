#include<stdio.h>
#include<conio.h>

main()
{
	struct student
	{
		int roll;
		char name[30];
		long int phone;
	};
	struct student a;
	struct student *ptr;
	ptr = &a;
	printf("Enter roll number,name,phone number:- ");
	scanf("%d%s%ld",&ptr->roll,&ptr->name,&ptr->phone);
	printf("%d %s %ld\n",a.roll,a.name,a.phone);
	printf("%d %s %ld",ptr->roll, ptr->name,ptr->phone);
	getch();
	
}
