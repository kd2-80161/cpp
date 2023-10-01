#include <iostream>
using namespace std;
class Address
{
    string building, street, city;
    int pin;

public:
    Address()
    {
        this->building = "";
        this->street = "";
        this->city = "";
        this->pin = 0;
    }
    Address(string building, string street, string city, int pin)
    {
        this->building = building;
        this->street = street;
        this->city = city;
        this->pin = pin;
    }
    void accept()
    {
        cout << "Enter\nBuilding\nStreet\nCity\nPin" << endl;
        getline(cin, this->building);
        getline(cin, this->street);
        getline(cin, this->city);
        cin >> pin;
    }

    void display()
    {
        cout << "Building\nStreet\nCity\nPin" << endl
             << this->building<<"\n"
        << this->street<<"\n"
        << this->city<<"\n"
        << this->pin;
    }

    string get_building()
    {
        return this->building;
    }

    void set_building(string building)
    {
        this->building = building;
    }

    string get_street()
    {
        return this->street;
    }

    void set_street(string street)
    {
        this->street = street;
    }

    string get_city()
    {
        return this->city = city;
    }

    void set_city(string city)
    {
        this->city = city;
    }

    int get_pin()
    {
        return this->pin;
    }

    void set_pin(int pin)
    {
        this->pin = pin;
    }
};

int main(int argc, char const *argv[])
{
    Address a;
    a.accept();
    a.display();
    return 0;
}
