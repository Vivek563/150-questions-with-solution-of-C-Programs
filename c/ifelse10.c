   /*  question - Write a program which enter marks in three subject of a students and calculate its average, independing on the average
	check and print the division according to following rule.
	
	Average                      Division
	60+                           First
	45 - <60                      Second
	33 - <45                      third
	<33                           Fails
  */
  
   
    #include<stdio.h>
	#include<conio.h>
	 main()
           {
				float m1,m2,m3;
				float avg;
				printf("Enter marks in three subject:- ");
				scanf("%f%f%f",&m1,&m2,&m3);
				avg = (m1+m2+m3)/3;
				if(avg >= 60)
				{
					printf("First division");
				}
				else if(avg >= 45 && avg<60){
					printf("Second Division");
				}else if(avg >= 33 && avg<45)
				{
					printf("Third Division");
			    }else{
			    	printf("Fail");
				}
					getch();	
           } 
                  
