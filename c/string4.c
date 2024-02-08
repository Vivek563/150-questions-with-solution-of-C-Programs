	#include<stdio.h>
	#include<conio.h>
			 main()
			 {
			 	char fname[30] = "Manish";
			 	char mname[20] = "Saina";
			 	char lname[20] = "Chinki";
				char name[60];
			 	int x;
			 	 	
			 	strcpy(name,fname);
			 	strcpy(name," ");
			 	strcat(name,mname);
			 	strcat(name," ");
			 	strcat(name,lname);
			 	
			 	x = strlen(name);
			 	puts(name);
			 	printf("Length = %d\n",x);
			 	
			 	strrev(name);
			 	puts(name);
			 	
			 	printf("\n%c",name[0]);
			 	getch();
			 }
