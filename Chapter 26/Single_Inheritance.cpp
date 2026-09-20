#include<iostream>
using namespace std;

// Base class --> Only gives the data 
class base{
    int Data1;
    public:
        int Data2;
        void setdata();
        int getdata1();
        int getdata2();
}; 

void base :: setdata(void){
    Data1 = 10;
    Data2 = 20;
}

int base :: getdata1(){
    return Data1;
}
int base :: getdata2(){
    return Data2;
}
// Derived class --> Process and dispalys the given data from base class
class Derived : public base{
    int Data3;
    public:
        void process();
        void display();
};

void Derived :: process(){
    Data3 = Data2 * getdata1();
}

void Derived :: display(){
    cout<<"Value of Data 1 is "<<getdata1()<<endl; // getdata1 is an function so its important to use () with getdata1
    cout<<"Value of Data 2 is "<<Data2<<endl;
    cout<<"Value of Data 3 is "<<Data3<<endl;
}
int main(){
    Derived der;
    der.setdata();
    der.process();
    der.display();
    return 0;
}