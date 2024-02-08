#include<iostream>
#include<conio.h>

using namespace std;

main()
{
	int n,i=1;
	long int b=1;
	cout<<"enter an integer  ";
	cin>>n;
	if(n<0)
	{
		cout<<"error! factorial of a negative num doesnot exit";
	}
	else
	{
		while(i<=n)
		{
			b=b*i;
			i++;
		}
		cout<<"factorial of  "<<n<<"   =   "<<b;
	}
	getch();
}
