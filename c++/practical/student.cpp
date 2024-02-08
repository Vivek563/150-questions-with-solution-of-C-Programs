#include<iostream>

using namespace std;

class student
{
	private:
		int roll;
		char name[30];
		int m1,m2,m3;
		long int m4;
		int total;
		float perc;
	public:
		void getdata();
		void calc();
		void showdata();
};

void student::getdata()
{
	cout<<"enter roll num, name,marks of three subject,total marks of 3 subject: ";
	cin>>roll>>name>>m1>>m2>>m3>>m4;
}

void student::calc()
	{
		total=m1+m2+m3;
		perc = total/m4*100;
	}
void student::showdata()
{
	calc();
	cout<<"roll is: "<<roll<<endl;
	cout<<"name is: "<<name<<endl;
	cout<<"marks of 1st subject: "<<m1<<endl;
	cout<<"marks of 2nd subject: "<<m2<<endl;
	cout<<"marks of 3rd subject: "<<m3<<endl;
	cout<<"marks of total subject: "<<m4<<endl;
	cout<<"percentage: "<<perc<<endl;
	
}

main()
{
	student x;
	x.getdata();
	x.showdata();

}
