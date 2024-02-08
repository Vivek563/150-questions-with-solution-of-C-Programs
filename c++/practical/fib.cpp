#include<iostream>
#include<conio.h>
using namespace std;
void fib(int n)
{
	static int n1=0,n2=1,n3;
	if (n>0)
	{
	n3=n1+n2;
	n1=n2;
	n2=n3;
	cout<<n3<<" ";
	fib(n-1);
	}
}
int main()
{
	int n;
	cout<<"Enter no =";
	cin>>n;
	cout<<"fibonacci series ";
	cout<<"0 "<<"1 ";
	fib(n-2);
	return 0;
}
