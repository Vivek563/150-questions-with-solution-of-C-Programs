#include<iostream>
#include<conio.h>

using namespace std;

main()
{
	int num1, num2,*ptr1, *ptr2, sum=0;
	cout<<"enter two no : ";
	cin>>num1>>num2;
	ptr1=&num1;
	ptr2=&num2;
	sum=*ptr1+*ptr2;
	cout<<"sum of two no is"<<sum;
	getch();
}
