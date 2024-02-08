//Question -   Write a program which enter any character then check and print wheater it is capital alphabet, small
//	 alphabet, digit or any other special character.
  // Solution - 
  
  	#include<stdio.h>
	#include<conio.h>
	 main()
           {
				char a;
				printf("Enter any character :- ");
				scanf("%c",&a);
				if(a>= A && a=< Z){
					printf("%c It is Capital alpahabet which ascii value is %d",a,a);
				}else if(a=>a && a<=a){
					printf("%c It is small alpahabet which ascii value is %d",a,a);
				}else if(a=>0 && a<=9){
					printf("%c It is digit which ascii value is %d",a,a);
				}else{
					printf("Digit")
				}
					getch();	
           } 
