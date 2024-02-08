#include<iostream>
#include<conio.h>
using namespace std;
class num
{
	public:
		sum()
		{
			int n,s=0,m;
			cout<<"Enter a number";
			cin>>n;
			while(n!=0)
			{
			m=n%10;
			s=s+m;
			n=n/10;
			}
		cout<<"sum is= "<< s;
		}	
};
main()
{
	num obj1;
	obj1.sum();
	getch();
}
