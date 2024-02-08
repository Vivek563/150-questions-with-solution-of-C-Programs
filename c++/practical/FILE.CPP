#include<iostream>
#include<fstream>
#include<conio.h>

using namespace std;

main()
{
ofstream file_output;
char ch,take[100];
file_output.open("xyz.txt");
cout<<"Please Enter Your Name & Address \n";
cin>>take;
file_output<<take;
file_output.close();
ifstream input;
input.open("xyz.txt");
while(!input.eof())
{
ch=input.get();
cout<<ch;
}
getch();

}
