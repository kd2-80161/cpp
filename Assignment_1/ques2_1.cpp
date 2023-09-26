/*
Write a menu driven program for Date in a CPP language using structure and also using class.
Date is having data members day, month, year. Implement the following functions.
void initDate();
void printDateOnConsole();
void acceptDateFromConsole();
bool isLeapYear();
*/
#include <iostream>
using namespace std;
struct Date
{

    int day;
    int month;
    int year;

    void initDate()
    {
        this->day = 0;
        this->month = 0;
        this->year = 0;
    }

    void printDateConsole()
    {
        cout << day<<"/" << month<<"/" << year << endl;
    }

    void acceptDateFromConsole()
    {
        cin >> day >> month >> year;
    }
    bool isLeapYear(int year){
        if(year%4==0 && year%4==0)
            return true;
        else
            return false;

    }
};

int main()
{
    struct Date d1;
    int choice;
    do
    {
        cout << "\nMenu:\n";
        cout << "1. Initialize Date\n";
        cout << "2. Print Date\n";
        cout << "3. Accept Date\n";
        cout << "4. Leap Year\n";
        cout << "5. Quit\n";
        cout << "Enter your choice: \n";
        cin>>choice;

       switch (choice)
       {
       case 1:
        /* code */
        d1.initDate();
        cout<<"\nIntilized value"<<endl;
        break;
        case 2:
        d1.printDateConsole();
        break;
        case 3:
        d1.acceptDateFromConsole();
        break;
        case 4:
        if(d1.isLeapYear(d1.year))
        cout<<"Leap year";
        else
        cout<<"Not a leap year";
        break;
        case 5:
        cout<<"Exiting Program";
        break;
       default:
       cout<<"Invalid Choice";
        break;
       }    
    } while (choice != 5);
}