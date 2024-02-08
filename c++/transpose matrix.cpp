#include<iostream>
#include<conio.h>

using namespace std;

main()
{
	int a[3][3],b[3][3],r,c;
	for(r=0;r<3;r++)
	{
		for(c=0;c<3;c++)
		{
			cout<<"enter any integer";
			cin>>a[r][c];
		}
	}
	for(r=0;r<3;r++)
	{
		for(c=0;c<3;c++)
		{
			b[c][r]=a[r][c];
		}	
	}
	for(r=0;r<3;r++)
	{
		for(c=0;c<3;c++)
		{
			cout<<a[r][c];
		}
		cout<<endl;
	}
	cout<<"transpose matrix";
	cout<<endl;
	for(r=0;r<3;r++)
	{
		for(c=0;c<3;c++)
		{
			cout<<b[r][c];
		}
		cout<<endl;
	}
	getch();
}
