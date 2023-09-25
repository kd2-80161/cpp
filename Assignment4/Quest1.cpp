/*Q1. Write a class for Time and provide the functionality
Time()
Time(int h,int m,int s)
getHour()
getMinute()
getSeconds()
printTime()
setHour()
setMinute()
setSeconds()
In main create array of objects of Time.
Allocate the memory for the array and the object dynamically.*/

#include <iostream>
using namespace std;
// namespace std;

class Time
{

    int h;
    int m;
    int s;

public:
    Time()
    {
    }

    Time(int h, int m, int s)
    {
        this->h = h;
        this->m = m;
        this->s = s;
    };

    int getHour()
    {
        return this->h;
    }
    int getMinute()
    {
        return this->m;
    }
    int getSeconds()
    {
        return this->s;
    }
    void printTime()
    {
        cout << h << m << s;
    }
    void setHour(int h)
    {
        this->h = h;
    }
    void setMinute(int m)
    {
        this->m = m;
    }
    int setSeconds(int s)
    {
        this->s = s;
    }
};

int main()
{
    cout<<"Enter the number of times you want to create the objects"<<endl;
   
    
}