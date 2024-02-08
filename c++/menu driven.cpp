#include<iostream>
#include<conio.h>

using namespace std;

main()
{
	float a,b;
	int c;
	cout<<"             menu";
	cout<<"               "<<endl<<endl<<endl;
	cout<<"1            Area of square"<<endl<<endl<<endl;
	cout<<"2            Area of circle"<<endl<<endl<<endl;
	cout<<"3            enter your choice"<<endl<<endl<<endl;
	cin>>c;
	switch (c)
	{
		case 1:
		cout<<"enter side of sq ";
		cin>>a;
		b=a*a;
		cout<<"Area of sq whose side is  "  <<a<<  " is"<<b;
		break;
		case 2:
		cout<<"enter radius of circle ";
		cin>>a;
		b=a*a*3.14;
		cout<<"Area of circle whose radius is  "<<a<<"  is  "<<b;
		break;
		default:
			cout<<"invalid choice";
			
	}
	getch();
}
