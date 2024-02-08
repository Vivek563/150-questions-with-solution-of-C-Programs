//Question:-Write a program which decleared an array to store 5 integer in function main then delop and implemenent following function:-
//				1. Entry to store data in array
//				2. Short to arrange the data of the array in acessing order.
//				3. show to print the data of the array.
//	Solution:- 	

	#include<stdio.h>
	#include<conio.h>
	
			void entry(int[]);
			void sort(int[]);
			void show(int[];);
				main()
					{
						int num[5];
						entry(num);
						show(num);
						sort(num);
						printf("\n\n");
						show(num);
						getch();
					}
					
				void entry(int n[])
					{
						int x;
						for(x=0;x<5;x++)
						{
							printf("\nEnter any number:- ");
							scanf("%d",&n[x]);
						}
						return;
					}
					
				void sort(int n[])
					{
						int x,y,temp;
						for(x=0;x<5;x++)
							{
								for(y=x+1;y<5;y++)
									{
										if(n[x]>n[y])
											{
												temp = n[x];
												n[x] = n[y];
												n[y] = temp;
											}
									}
							}
							return;
					}
				
				void show(int d[])
				{
					int a;
					for(a=0;a<5;a++)
					{
						printf("%d\n",d[a]);
					}
					return;
				}
				
				
				
				
				
				
				
				
				
				
				
				
				
				
				
				
				
				
				
				
					
