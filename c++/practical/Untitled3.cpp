#include<iostream>

using namespace std;

       union Employee
       {
              int Id;
              char Name[25];
              int Age;
              long Salary;
       };

       int main()
       {

              Employee E;

                    cout << "\nEnter Employee Id : ";
                    cin >> E.Id;

                    cout << "\nEnter Employee Name : ";
                    cin >> E.Name;

                    cout << "\nEnter Employee Age : ";
                    cin >> E.Age;

                    cout << "\nEnter Employee Salary : ";
                    cin >> E.Salary;

                    cout << "\n\nEmployee Id : " << E.Id;
                    cout << "\nEmployee Name : " << E.Name;
                    cout << "\nEmployee Age : " << E.Age;
                    cout << "\nEmployee Salary : " << E.Salary;


       }
