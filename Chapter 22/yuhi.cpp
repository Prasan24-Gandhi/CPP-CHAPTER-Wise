#include<iostream>
using namespace std;

class complex{
    int a ;
    int b ;  
    public:
        void setnum(int n1 , int n2){
            a = n1;
            b = n2;
        }
        void complex_sum(complex co , complex co1){
            a = co.a + co1.a;
            b = co.b + co1.b;
        }
        void Printnum(void){
            cout<<"The complex sum is "<<a<<" + "<<b<<"i"<<endl;
        }
};

int main(){
    complex a,b,sum;
    a.setnum(1,2);
    a.Printnum();

    b.setnum(3,2);
    b.Printnum();

    sum.complex_sum(a,b);
    sum.Printnum();
    return 0;
}