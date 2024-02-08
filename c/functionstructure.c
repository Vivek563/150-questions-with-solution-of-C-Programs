//Question:- Write a program which defines a structure call student, with the member item roll,name,phone then decleared an array to store the record of 5 student in
//				function main then develpo and implement function for following:-
//				1. Entry to store data in array
//				2. Show to print the data of the array.
//	Solution:- 

#include<stdio.h>
#include<conio.h>

struct student
{
	int roll;
	char name[30];
	long phone;
};

void entry(struct student[]);
void show(struct student[]);
main()
{
	struct student a[5];
	entry(a);
	show(a);
	getch();
}

void entry(struct student b[])
{
	int x;
	for(x=0;x<3;x++)
	{
		printf("Enter Roll noumber, name and phone no. :- ");
		scanf("%d%s%ld",&b[x].roll,&b[x].name,&b[x].phone);
	}
}

void show(struct student b[])
{
	int x;
	for(x=0;x<3;x++)
	{
		printf("%d%s%ld\n",b[x].roll,b[x].name,b[x].phone);
	}
}









