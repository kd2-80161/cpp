#include<iostream>
class Cylinder{
    int r;
    int h;
    double pi;
    Cylinder(){
        this->r=0;
        this->h=0;
        this->pi=3.14;
    }
    Cylinder(double radius,double height)
    {
        this->r=radius;
        this->h=height;
    }

    int getRadius(){
        return this->r;
    }

    void  setRadius(int radius){
         this->r=radius;
    }

    int getHeight(){
        return this->h;
    }

    void  setHeight(int height){
         this->h=height;
    }

    void getVolume(){
        
    }
};
