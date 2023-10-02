#include<iostream>
using namespace std;
class Tollbooth{
    unsigned int t_no_cars;
    double t_amt_money;
    public:
    Tollbooth(){
        t_no_cars=0;
        t_amt_money=0;
    }
    Tollbooth(unsigned int t_no_cars,double t_amt_money){
        this->t_no_cars=t_no_cars;
        this->t_amt_money=t_amt_money;
    }

    void payingCar(){
        this->t_no_cars++;
        this->t_amt_money=this->t_amt_money+0.50;
    }

    void nopayCar(){
        this->t_no_cars++;
    }

    void printOnConsole(){
        cout<<"Total No of CArs"<<endl;
        cout<<t_no_cars<<endl;
        cout<<"Total Amt Collected"<<endl;
        cout<<t_amt_money<<endl;
        cout<<"Paying Cars"<<endl;

        int total_amt=(t_no_cars*0.50);

        int diff=total_amt-t_amt_money;

        int non_paying_cars=diff/0.50;

        int paying_cars=t_no_cars-non_paying_cars;

        cout<<paying_cars<<endl;
        cout<<"NON Paying Cars"<<endl;
        cout<<non_paying_cars<<endl;
    }

};

int main(){
  Tollbooth *t = new Tollbooth(10,4.0);
  t->printOnConsole();

}