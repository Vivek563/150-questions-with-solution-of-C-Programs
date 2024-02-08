//Question -   Write a program which enter any character then check and print wheater it is capital alphabet, small
//	 alphabet, digit or any other special character.
  // Solution - 
  
  	#include<stdio.h>
	#include<conio.h>
	 main()
           {
				char P;
				printf("Enter any character :- ");
				scanf("%c",&P);
				if(P>='A' && P<='Z')
				{
					printf("%c It is Capital alpahabet which ascii value is %d",P,P);
				}else if(P>='a' && P<='z'){
					printf("%c It is small alpahabet which ascii value is %d",P,P);
				}else if(P>='0' && P<='9'){
					printf("%c It is digit which ascii value is %d",P,P);
				}else{
					printf("Special character");
				}
					getch();	
           } 
