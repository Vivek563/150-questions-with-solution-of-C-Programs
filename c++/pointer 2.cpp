#include<iostream>
#include<conio.h>

using namespace std;
main()
{
	int a,b,c;
	cout<<"enter 2 integer ";
	cin>>a>>b;
	int *p1, *p2, *p3;
	p1=&a, p2=&b, p3=&c;
	*p3=*p1 + *p2;
	cout<<a<<"+"<<b<<"="<<c<<endl;
	cout<<*p1<<"+"<<*p2<<"="<<*p3;
	getch();
}
