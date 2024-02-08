//Question:- Write a program whcih define a structure called student with the member item roll,name and phone.
//					 Store the record id 5 student, then arrange the order in assending order of name.						
//								
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
						struct student a[5];
						struct student temp;
						int x,y;
						for(x=0;x<5;x++)
						{
						printf("\nEnter roll number:- ");
						scanf("%d",&a[x].roll);
						puts("Enter name:- ");
						fflush(stdin);
						gets(a[x].name);
						printf("\nEnter phone:- ");
						scanf("%ld",&a[x].phone);
					}
					
					for(x=0;x<4;x++)
					{
						for(y=x+1;x<4;x++)
						{
							if(strcmp(a[x].name,a[y].name)>0)
							{
								temp=a[x];
								a[x]=a[y];
								a[y]=temp;
							}
						}
					}
					for(x=0;x<5;x++)
					{
						printf("%d\t%s\t%ld\n",a[x].roll,a[x].name,a[x].phone);		
				    }					getch();
		}
