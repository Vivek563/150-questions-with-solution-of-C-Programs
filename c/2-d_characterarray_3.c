//Question:- Write a program which store Roll no, name, and phone no. of 5 students then arrange them in order of name.
//	Solution:-
//			

	#include<stdio.h>
	#include<conio.h>
	#include<string.h>
			main()
			{
				int roll[5]={101,102,103,104,105};
				char name[5][30]={"Manish","Chinki","Sania","Vivek","Ashish"};
				long phone[5] = {24234,45453,45322,67564,89765};
				long t;
				char temp[30];
				int x,y,b;
		
				for(x=0;x<5;x++)
				{
					for(y=x+1;y<5;y++)
					{
						b=strcmp(name[x],name[y]);
						if(b<0)
						{
							t=roll[x];
							roll[x]=roll[y];
							roll[y]=t;
							strcpy(temp,name[x]);
							strcpy(name[x],name[y]);
							strcpy(name[y],temp);
							
							t= phone[x];
							phone[x]=phone[y];
							phone[y]=t;
						}
					}
					
				}
				for(x=0;x<5;x++)
				{
					printf("%d     %s    %ld\n",roll[x],name[x],phone[x]);
				}
				getch();
			}

