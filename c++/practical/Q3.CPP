#include<iostream.h>
#include<conio.h>
class student
{
public:
student()
{
cout << "\n This is a student" ;
}
};
class a: public student
{

};
class b: public student
{

};
void main()
{
clrscr();
a obj1;
b obj2;
getch();

}