#include <iostream>
using namespace std;

class Employee
{
    int id;
    float sal;

public:
    Employee()
    {
        this->id = 0;
        this->sal = 0;
    }
    Employee(int id, float sal)
    {
        this->id = id;
        this->sal = sal;
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

    void display()
    {
        cout << "ID is"
             << this->id
             << "Salary is"
             << this->sal
             << endl;
    }

    void accept()
    {
        cout << "Enter ID"
             << "Enter Salary" << endl;
        cin >> this->id >> this->sal;
    }
};

class Manager :virtual public  Employee
{
    float bonus;
    Employee e;

public:
    Manager()
    {
        this->bonus = 0;
    }
    Manager(int id, float sal, float bonus) : e(id, sal)
    {
        this->bonus=bonus;
    }
    float get_bonus()
    {
        return this->bonus;
    }
    void set_bonus(float bonus)
    {
        this->bonus = bonus;
    }

    void display()
    {
        cout << "ID"
             << "Salary" << endl;
        cout << e.get_id() << e.get_sal() << endl;
        cout << "Bonus" << endl;
        cout << bonus << endl;
    }
    void accept(){
      cout<<"Enter ID"<<"Enter Salary"<<"Enter Bonus"
      <<endl;
      e.accept();
      cin>>bonus;
    }

protected:
    void display_manager()
    {
        cout << "Bonus is" << bonus;
    }
    void accept_manager()
    {
        cout << "Enter the bonus" << endl;
        cin >> this->bonus;
    }
};

/*
Salesman Class
 */

class Salesman : virtual public Employee
{
    
    float comm;
    Employee e;
    public:
    Salesman()
    {
        comm = 0;
    }

    Salesman(int id, float sal, float comm):e(id,sal)
    {
        this->comm = comm;
    }

    float get_comm()
    {
        return this->comm;
    }

    void set_comm(float comm)
    {
        this->comm = comm;
    }
    void display()
    {
        e.display();
        cout << "commission is" << this->comm;
    }
    void accept(){
        e.accept();
        cout << "Enter the commission";
        cin >> this->comm;
    }

protected:
    void display_salesman()
    {
        cout << "commission is" << this->comm;
    }

    void accept_salesman()
    {
        cout << "Enter the commission";
        cin >> this->comm;
    }
};

class sales_manager:Manager,Salesman{
   Manager m;
   Salesman s;
   public:
    sales_manager(){
        Manager(0,0.0,0.0);
        Salesman(0,0.0,0.0);
    }
    sales_manager(int id,float sal,float bonus,float comm){
        Manager(id,sal,bonus);
        Salesman(id,sal,comm);

    }
    void display(){
        m.display();
        s.display();

    }
    void accept(){
        m.accept();
        s.accept();
    }
};

int main(){
    sales_manager sm;
    sm.accept();
    sm.display();
}