#include<iostream>
#include<conio.h>

using namespace std;

main()
{
	int num;
	cout<<"enter any number"<<endl;
	cin>>num;
	int *ptr;
	ptr=&num;
	cout<<"value of num ="<<num<<endl;
	cout<<"Address of num ="<<num<<endl;
	cout<<"Address of num ="<<ptr<<endl;
	getch();
	
}
