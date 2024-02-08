#include<iostream>
#include<conio.h>
using namespace std;
class num
{
public:
rev()
{
	int n, reve=0,rem;
	cout<<"Enter a number";
	cin>>n;
	while(n!=0)
	{
		rem=n%10;
		reve=reve*10+rem;
		n/=10;
	}
	cout<<"reversed no."<<reve;
}	
};
main()
{
	num obj1;
	obj1.rev();
	getch();
} 
