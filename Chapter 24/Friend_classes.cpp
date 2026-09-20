#include<iostream>
using namespace std;

// Forward declaration
class complex;

class calculator{
    public:
        int add(int a ,int b){
            return a+b;
        }

        int addcomplexNum(complex  ,complex);
};


class complex{
    int a;
    int b;
    friend int calculator :: addcomplexNum(complex  ,complex);
    public:
        void setNumber(int n1 ,int n2){
            a = n1;
            b = n2;
        }
        void printNumber(){
            cout<<"Your number is "<<a<<" + "<<b<<"i"<<endl;
        }
};

int calculator :: addcomplexNum(complex o1 , complex o2){
    return (o1.a + o2.b), (o1.b + o2.b);
}


int main(){
    complex o1 , o2;
    o1.setNumber(1,2);
    o2.setNumber(2,4);
    calculator calc;
    int result = calc.addcomplexNum(o1,o2);
    cout<<"The sum of real part of num is "<<result<<endl;
    return 0;
}