/* Question - Write a program which enter no. of row the print it in the following structure - 	 
	 					A
						B B
						C C C
						D D D D
						E E E E E

*/

	#include <stdio.h>
	#include<conio.h>
		int main()
			 {
   				int i, j;
   				char input, alphabet = 'A';
   				printf("Enter an uppercase character you want to print in the last row: ");
   				scanf("%c", &input);
   				for (i = 1; i <= (input - 'A' + 1); ++i)
				    {
      					for (j = 1; j <= i; ++j) 
						  {
         					printf("%c ", alphabet);
      					  }
      				++alphabet;
      				printf("\n");
   					}
  		 getch();
	}
