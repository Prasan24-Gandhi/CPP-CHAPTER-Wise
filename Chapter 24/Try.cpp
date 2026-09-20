#include<iostream>
using namespace std;

class complex;

class calculator{
    public:
        int add(int a , int b){
            return a+b;
        }
        int addcomplex(complex , complex);
};

class complex{
    int a;
    int b;
    friend int calculator :: addcomplex(complex , complex);
    public:
        void Setnum(int v1 , int v2){
            a = v1;
            b = v2;
        }
        void printnum(void){
            cout<<"The Solution of complex number is "<<a<<" + "<<b<<"i"<<endl;
        }
};

int calculator :: addcomplex(complex o1 , complex o2){
    return (o1.a+o2.a) , (o1.b+o2.b);
}
    


int main(){
    complex a ,b ;
    a.Setnum(1,2);
    b.Setnum(2,4);
    calculator calc;
    int result = calc.addcomplex(a,b);
    cout<<"The sum of real part of num is "<<result<<endl;
    return 0;
}