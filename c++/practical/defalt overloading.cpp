#include<iostream>

using namespace std;

int sum(int a, int b)
{
	return a+b;
}

int sum(int a, int b, int c)
{
return a+b+c;
}

int sum(int a, double b)
{
	return a+b;
}

int sum(double a,int b)
{
	return a+b;
}
int main()
{
	cout<<sum(1,2)<<endl;
	cout<<sum(1,2,3)<<endl;
	cout<<sum(1,1.2)<<endl;
	cout<<sum(1.2,1)<<endl;
}
