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
	struct student a[5];
	struct student *ptr;
	int x;
	ptr = a;
	
	for(x=1;x<=5;x++)
		{
			printf("Enter roll number,name,phone number:- ");
			scanf("%d%s%ld",&ptr->roll,&ptr->name,&ptr->phone);
			ptr++;
		}
	
	ptr = a;
	for(x=1;x<=5;x++)
			{
			
				printf("%d %s %ld \n",ptr->roll, ptr->name,ptr->phone);
				ptr++;
			}
	getch();
	
}
