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
        cout << getHour() <<":"<< getMinute()<<":" << getSeconds()<<endl;
    }
    void setHour(int h)
    {
        this->h = h;
    }
    void setMinute(int m)
    {
        this->m = m;
    }
    void setSeconds(int s)
    {
        this->s = s;
    }
};

int main()
{
    int numTimes;
    cout<<"Enter the number of times you want to create the objects"<<endl;
    cin>> numTimes;
    Time* timearray = new Time[numTimes];

     for (int i = 0; i < numTimes; ++i) {
        int h, m, s;
        cout << "Enter time for object " << i + 1 << " (HH MM SS): ";
        cin >> h >> m >> s;
        timearray[i] = Time(h, m, s);
     }

        // Print the Time objects
    cout << "Time objects created:" << endl;
    for (int i = 0; i < numTimes; ++i) {
        timearray[i].printTime();
    }

    delete[] timearray;
    return 0;
}