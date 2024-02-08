#include<iostream>
#include<conio.h>

using namespace std;

int sum(int,int);

int main()
{
	int a,b,s;
	cout<<"enter two integer: ";
	cin>>a>>b;
	cout<<"\n sum of two no is "<< s;
	getch();
}

void sum(int a, int b, int s)
{
	s = a + b;
}
