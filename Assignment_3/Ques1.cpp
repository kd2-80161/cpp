/* 
Q1. Write a menu driven program to calculate
volume of the box(length * width * height).
Provide necessary constructors. */
#include<iostream>
using namespace std;
class Volume{
    int length;
    int width;
    int height;

    public:
    Volume(){
        this->length=this->width=this->height=0;
    }

    Volume(int length,int width,int height){
        this->length=length;
        this->width=width;
        this->height=height;
    }

    void accept(){
        cout<<"Enter the length\n";
        cin>>this->length;
        cout<<"Enter the width\n";
        cin>>this->width;
        cout<<"Enter the height\n";
        cin>>this->height;
    }

    void calculate(){
        cout<<"Volume is\n";
        cout<<this->length*this->width*this->height;
    }
};

int main(){
    
    Volume *v = new Volume;
    v->accept();
    v->calculate();
    return 0;
}