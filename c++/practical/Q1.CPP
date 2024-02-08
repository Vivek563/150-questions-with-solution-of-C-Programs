#include<iostream.h>
#include<conio.h>
class number
{
public:
digit()
{
int n,a;
cout << "enter no.";
cin >> n;
a=0;
while (n ! = 0)
{
n=n/10;
++a;
}
cout << a;
}
};
void main()
{
clrscr();
number obj1;
obj1.digit();
getch();
}
