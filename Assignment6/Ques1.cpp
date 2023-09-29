#include <iostream>
using namespace std;

class Date
{
private:
    int day;
    int month;
    int year;

public:
    Date()
    {
        this->day = 0;
        this->month = 0;
        this->year = 0;
    }

    Date(int day, int month, int year)
    {
        this->day = day;
        this->month = month;
        this->year = year;
    }
    int getDay()
    {
        return this->day;
    }
    void setDay(int day)
    {
        this->day = day;
    }

    int getMonth()
    {
        return this->month;
    }
    void setMonth(int month)
    {
        this->month = month;
    }

    int getYear()
    {
        return this->year;
    }

    void getYear(int year)
    {
        this->year = year;
    }

    void display()
    {
        cout << day << "/" << month << "/" << year << endl;
    }

    void accept()
    {
        cout << "Enter day month year" << endl;
        cin >> day >> month >> year;
    }

    bool isLeapYear()
    {
        return (year % 100 != 0 && year % 4 == 0);
    }
};

/*

Employee class

 */

class Employee
{
private:
    /* data */
    int id;
    float sal;
    string dept;
    Date joining;

public:
    Employee()
    {
        id = 0;
        sal = 0;
        dept = "";
    }
    Employee(int id, float sal, string dept, int d, int m, int y) : joining(d, m, y)
    {
        this->id = id;
        this->sal = sal;
        this->dept = dept;
    }

    int get_sal()
    {
        return this->sal;
    }

    void set_sal(int sal)
    {
        this->sal = sal;
    }

    void set_dept(string dept)
    {
        this->dept = dept;
    }

    string get_dept()
    {
        return this->dept;
    }

    int get_id()
    {
        return this->id;
    }

    void set_id(int id)
    {
        this->id = id;
    }

    Date get_joining_date()
    {
        return joining;
    }

    void set_joining_date()
    {
        this->joining.accept();
    }

    void display()
    {
        cout << "Employee id\n"
             << "Employee Salary\n"
             << "Employee Department\n"
             << endl;

        cout << get_id() << get_sal() << get_dept();
        this->joining.display();
    }

    void accept()
    {

        cout << "Employee id\n"
             << "Employee Salary\n"
             << "Employee Department\n"
             << endl;
        int tid;
        int tsal;
        string tdept;
        cin >> tid;
        cin >> tsal;
        getchar();
        getline(cin, tdept);

        set_id(tid);
        set_sal(tsal);
        set_dept(tdept);
        cout << "Enter Joining Date";
        joining.accept();
    }
};

class Person
{
private:
    string name;
    string addr;
    Date dob;

public:
    Person()
    {
        name = "";
        addr = "";
    }
    Person(string name, string addr, Date dob)
    {
        this->name = name;
        this->addr = addr;
        this->dob = dob;
    }

    string get_name()
    {
        return this->name;
    }
    void set_name(string name)
    {
        this->name = name;
    }
    string get_addr()
    {
        return this->addr;
    }
    void set_addr(string addr)
    {
        this->addr = addr;
    }
    Date get_birth_date()
    {
        return this->dob;
    }
    void set_birth_date(Date dob)
    {
        this->dob = dob;
    }

    void display()
    {
        cout << "Name\n"
             << name << "Address\n"
             << addr << endl;
        dob.display();
    }

    void accept()
    {
        cout << "Enter Name\n"
             << name << "Enter Address\n"
             << addr << endl;
        cin >> this->name >> this->addr;
        dob.accept();
    }
};

int main(int argc, char const *argv[])
{
    Date d;
    d.accept();
    d.display();
    if (d.isLeapYear())
        cout << d.getYear() << " is a leap Year\n"
             << endl;
    else
        cout << d.getYear() << " Not a Leap Year\n";
    Person p;
    p.accept();
    p.display();
    Employee e;
    e.accept();
    e.display();

    return 0;
}