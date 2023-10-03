#include "./menu.h"
#include <iostream>
using namespace std;

Emenu menu(){
    int choice ;
    cout<<"***************"<<endl;
    cout<<"0. Exit"<<endl
    <<"1.Add Employee"<<endl
    <<"2.Display Employee"<<endl
    <<"3.Increment Salary"<<endl
    <<"Enter the choice = "<<endl;
    cin >> choice;
    cout<< "*******************"<<endl;
    return Emenu(choice);

}
