#include<iostream>

using namespace std;

       union Account
       {
              long int Id;
              char Name[25];
              char designation[30];
              char type[30];
       };

    int main()
       {

              Account E;

                    cout << "\nEnter Account Id : ";
                    cin >> E.Id;

                    cout << "\nEnter Account Name : ";
                    cin >> E.Name;

                    cout << "\nEnter Account designation : ";
                    cin >> E.type;

                    cout << "\n\nAccount Id : " << E.Id;
                    cout << "\nAccount Name : " << E.Name;
                    cout << "\nAccount designation : " << E.type;


       }
       
