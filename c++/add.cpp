#include<conio.h>
#include<iostream>

using namespace std;

class add
{
	private:
		int a,b,c;
	public:
		void getdata(int m,int n,int q)
		{
			a=m;
			b=n;
			c=q;	
		}
		void show()
		{
			cout<<a<<endl<<b<<endl<<c<<endl;
		}
};

main()
{
	add p;
	p.getdata(300,400,700);
	p.show();
	getch();
}
