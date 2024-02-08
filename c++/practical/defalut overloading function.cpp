#include<iostream>

using namespace std;

int mul(int a, int b)
{
	return a*b;
}

int mul(int a, int b, int c)
{
return a*b*c;
}

int mul(int a, double b)
{
	return a*b;
}

int mul(double a,int b)
{
	return a*b;
}
int main()
{
	cout<<mul(1,2)<<endl;
	cout<<mul(1,2,3)<<endl;
	cout<<mul(1,1.2)<<endl;
	cout<<mul(1.2,1)<<endl;
}
