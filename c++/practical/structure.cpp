#include<iostream>

using namespace std;

       struct Employee
       {
              int Id;
              char Name[25];
              char designation[30];
              long Salary;
       };

    int main()
       {

              Employee E;

                    cout << "\nEnter Employee Id : ";
                    cin >> E.Id;

                    cout << "\nEnter Employee Name : ";
                    cin >> E.Name;

                    cout << "\nEnter Employee designation : ";
                    cin >> E.designation;

                    cout << "\nEnter Employee Salary : ";
                    cin >> E.Salary;

                    cout << "\n\nEmployee Id : " << E.Id;
                    cout << "\nEmployee Name : " << E.Name;
                    cout << "\nEmployee designation : " << E.designation;
                    cout << "\nEmployee Salary : " << E.Salary;


       }
