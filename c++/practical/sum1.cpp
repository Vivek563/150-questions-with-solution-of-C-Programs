#include<iostream>
#include<conio.h>
using namespace std;
class abc
{
public:
int sum(int n)
{
	if(n==0)
	{
		return 0;
	}
	else
	{
		return(n%10)+sum(n/10);
	}
}
int m()
{
	int num;
	cout<<" Enter no.";
	cin>>num;
	cout<<"\nsum of digit:"<<sum(num);
}
};
main()
{
	abc obj1;
	obj1.m();
	return 0;
}
