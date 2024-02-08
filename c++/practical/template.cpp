#include <iostream>
#include <conio.h>
using namespace std;

template<class t1,class t2>
void sum(t1 a,t2 b) // defining template function
{
    cout<<"Sum="<<a+b<<endl;
}

int main()
{
    int a,b;
    cout<<"Enter two integer data: ";
    cin>>a>>b;
    sum(a,b); // adding two integer type data
    getch();
    return 0;
}
