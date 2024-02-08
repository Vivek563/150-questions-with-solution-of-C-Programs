/* Question - Write a program which ask for a integer from the user. It reverse the Integer and print same, it after reversal, the number 
			is same as old num, otherwise it print not same.
Solution -  */

#include<stdio.h>
	#include<conio.h>
	main()
	{
		int n, reversedInteger = 0, remainder, originalInteger;
		printf("Enter an Integer ");
		scanf("%d", &n);
		originalInteger = n;
		while(n!=0)
		{
			remainder = n % 10;
			reversedInteger = reversedInteger * 10 + remainder;
			n = n/10;
		}
		if(originalInteger == reversedInteger)
		{
			printf("%d is a Palindrome",originalInteger);
		}else{
			printf("%d is not a Palindrome ",originalInteger);
		}
		getch();
	} 
