#include<iostream>
#include<conio.h>

using namespace std;

void sum(int a, int b, int *s)
{
	*s = a + b;
}
int main()
{
	int a,b,s;
	cout<<"enter two integer: ";
	cin>>a>>b;
	
	sum(a,b,&s);
	cout<<"\n sum of two no is "<< s;
	return 0;
	getch();
}
