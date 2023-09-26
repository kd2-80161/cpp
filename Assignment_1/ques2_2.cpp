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
class Date
{

    int date;
    int month;
    int year;

public:
    void initDate()
    {
        date = 0;
        month = 0;
        year = 0;
    }

    void printDateOnConsole()
    {
        cout << date << "/" << month << "/" << year << endl;
    }
    void acceptDateFromConsole()
    {
        cin >> date >> month >> year;
    }
    bool isLeapYear()
    {
        if (year % 100 != 0 && year % 4 == 0)
        {
            return true;
        }
        else
        {
            return false;
        }
    }

};
int main()
{
    Date d;
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
        cin >> choice;
        switch (choice)
        {
        case 1:
            d.initDate();
            cout << "Intialize";
            break;
        case 2:
            d.printDateOnConsole();
            break;
        case 3:
            d.acceptDateFromConsole();
            break;
        case 4:
            if (d.isLeapYear())
                cout << "Leap Year";
            else
                cout<<"Not a leap Year";
            break;
        case 5:
            cout << "Exiting" << endl;
            break;
        default:
            cout << "Invalid Choice";
        }
    } while (choice != 5);
    return 0;
}