#include <iostream>
using namespace std;
class Time
{
    int hr, min, sec;

public:
    Time()
    {
        this->hr = 0;
        this->min = 0;
        this->sec = 0;
    }
    Time(int hr, int min, int sec)
    {
        this->hr = hr;
        this->min = min;
        this->sec = sec;
    }

    int getHour()
    {
        return this->hr;
    }
    int getMinutes()
    {
        return this->min;
    }
    int getSeconds()
    {
        return this->sec;
    }

    void setHour(int hr)
    {
        this->hr = hr;
    }

    void setMinutes(int min)
    {
        this->min = min;
    }

    void setSeconds(int sec)
    {
        this->sec = sec;
    }

    void accept()
    {

        cout << "Hour"
             << "Minute"
             << "Seconds" << endl;
        cin >> hr >> min >> sec;
    }

    void display()
    {
        cout << "Hour"
             << "Minute"
             << "Seconds" << endl;
        cout << hr << min << sec;
    }
};

int main()
{

    Time **t = new Time *[2];

    t[0] = new Time(0, 0, 0);
    t[1] = new Time(10, 10, 10);

    for (int i = 0; i < 2; i++)
    {
        t[i]->accept();
    }
    for (int i = 0; i < 2; i++)
    {
        t[i]->display();
    }

    for (int i = 0; i < 2; i++)
    {
        /* code */
        delete t[i];
    }

    delete[] t;

    return 0;
}

void main1(){
    int no_obj;
    cout<<"Enter the number of obj you want to create"<<endl;
    cin>>no_obj;

    Time **t1 = new Time*[no_obj];

   for(int i=0;i<no_obj;i++){
    cout
   }

    for (int i = 0; i < ; i++)
    {
        /* code */
    }
    

}