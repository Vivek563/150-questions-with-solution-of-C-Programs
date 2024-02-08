# include<iostream>
#include<conio.h>

using namespace std;

const int values = 30;
int main ()
{
int num[values];
int max , i;

cout << "Please enter 3 numbers: \n ";
cin >> num[0] >>num[1] >>num[2];

max = num[0];

for (int i=0; i<3; i++)
if (max < num[i])
max = num[i];
cout << "The maxmum value is:" << max << endl ;
}
