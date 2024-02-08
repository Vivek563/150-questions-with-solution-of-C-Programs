#include<iostream>
using namespace std;
class ABC
{
   private:
     int length,breadth,x;
   public:
     ABC (int a,int b) //parameterized constructor to initialize l and b
     {
         length = a;
         breadth = b;
      }
      int area( ) //function to find area
      {
         x = length * breadth;
         return x;
      }
      void display( ) //function to display the area
      {
          cout << "Area = " << x << endl;
      }
};

int main()
{
    ABC c(2,4);  //initializing the data members of object 'c' implicitly
    c.area();
    c.display();
    ABC c1= ABC(4,4);  // initializing the data members of object 'c' explicitly
    c1.area();
    c1.display();
    return 0;
 }   
