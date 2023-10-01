#include<iostream>
class Facto{
int fact(int n){
    if(n<0)
        throw 1;
    if(n==1||n==0){
        return 1;
    }
    return n*fact(n-1);
}
};

void main(){
    
    try{

    }
}