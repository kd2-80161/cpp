#include <iostream>
using namespace std;
class Date
{
    int day, month, year;

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

    int get_day()
    {
        return this->day;
    }
    void set_day(int day)
    {
        this->day = day;
    }
    int get_month()
    {
        return this->month;
    }

    void set_month(int month)
    {
        this->month = month;
    }

    int get_year()
    {
        return this->year;
    }

    void set_year(int year)
    {
        this->year = year;
    }

    void display()
    {
        cout << "Day\n"
             << this->day
             << "Month\n"
             << this->month
             << "Year\n"
             << this->year
             << endl;
    }

    void accept()
    {
        cout << "Enter"
             << "Day "
             << "Month "
             << "Year ";
        cin >> day >> month >> year;
    }

    bool is_leap_year()
    {
        int yr = get_year();

        return (yr % 100 != 0 && yr % 4 == 0);
    }
};

class Person
{
    string name, addr;
    Date birth_date;

public:
    Person()
    {
        name = addr = "";
        /*birth_date doesn't need to be initalized
        because at the time of object creation
        */
    }
    Person(string name, string addr, Date birth_date)
    {
        this->name = name;
        this->addr = addr;
        this->birth_date = birth_date;
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
        return this->birth_date;
    }

    void set_birth_date(Date birth_date)
    {
        this->birth_date = birth_date;
    }

    void display()
    {
        cout << "Name" << endl;
        cout<< get_name() << endl;
        cout<< "Address" << endl;
        cout<< get_addr() << endl;
        get_birth_date();
    }

    void accept()
    {
        cout << "Enter Name" << endl
             << "Address" << endl
             << "Birth Date" << endl;

        getline(cin,this->name);
        getline(cin,this->addr);
        birth_date.accept();
    }
};

class Employee : public Person
{
    int id;
    float sal;
    string dept;
    Date joining;
    Person p;
public:
    Employee()
    {
        id = 0;
        sal = 0.0;
        dept = "";
    }
    Employee(string name, string addr, Date birth_date, int id, float sal, string dept, Date joining) : p(name, addr, birth_date)
    {
        this->id = id;
        this->sal = sal;
        this->dept = dept;
        this->joining = joining;
    }

    int get_id()
    {
        return this->id;
    }

    void set_id(int id)
    {
        this->id = id;
    }

    float get_sal()
    {
        return this->sal;
    }

    void set_sal(float sal)
    {
        this->sal = sal;
    }

    string get_dept()
    {
        return this->dept;
    }

    void set_dept(string dept)
    {
        this->dept = dept;
    }

    Date get_joining_date()
    {
        return this->joining;
    }

    void set_joining_date(Date joining)
    {
        this->joining = joining;
    }
    void display()
    {

        cout << "Id" << endl
             << "Salary" << endl
             << "Dept" << endl
             << this->id << endl
             << this->sal << endl
             << this->dept << endl;

        p.display();
        joining.display();
    }

    void accept()
    {
        cout << "Enter id" << endl;
        cin >> id;
        cout << "Enter the salary" << endl;
        cin >> sal;
        getchar();
        cout << "Enter the dept" << endl;
         getline(cin,this->dept);
        joining.accept();

    }
};



int main(){
    Employee e;
    e.accept();
    e.display();
    return 0;
}