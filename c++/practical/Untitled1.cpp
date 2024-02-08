#include<iostream>
#include<conio.h>
using namespace std;
class num
{
public:
	digit()
	{
		int n,a=0;
		cout<<"Enter no.";
		cin>>n;
		while(n!=0)
		{
			n=n/10;
			++a;
		}
		cout<< "digit="<<a;
	}

};
main()
{
	num obj1;
	obj1.digit();
	getch();	
}

