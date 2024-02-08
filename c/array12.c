//Question - Write a program which store 2 integer in an array then ask an value from the user to search. if the given value is present tin the array then print
//				its present in the array otherwise give not present in the array	
//	Solution:-	

	#include<stdio.h>
	#include<conio.h>
			main()
			{
				int num[8] = {8,22,1,69,44,37,17,87};
				int x,y,n,lb=0,ub=7,mid,t;
				for(x=0;x<7;x++)
				{
					for(y=x+1;y<8;y++)
						{
							if(num[x]>num[y])
								{
									t=num[x];
									num[x]=num[y];
									num[y]=t;
								}
						}
				}
				for(x=0;x<8;x++)
				{
					printf("%d\n",num[x]);	
				}
				printf("\nEnter value to search:- ");
				scanf("%d",&n);
				while(lb<=ub)
				{
					mid = (lb +ub)/2;
					if(n==num[mid])
					{
						break;
					}else if(n>num[mid]){
						lb = mid+1;
					}else{
						ub=mid-1;
					}
				}
				if(lb<=ub){
					printf("%d is present in the array",n);
				}else{
					printf("%d is not present in the array",n);
				}
				getch();
			}
			
			
			
			
			
			
			
