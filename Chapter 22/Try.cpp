#include<iostream>
using namespace std;

class complex{
    int a;
    int b;
    public:
        void Setnum(int n1 ,int n2){
            a = n1;
            b = n2;
        }
        void Sumcomplex(complex o1 ,complex o2){
            a = o1.a + o2.a;
            b = o1.b + o2.b;
        }

        void Printnum(void){
            cout<<"The Solution of Complex num is "<<a<<" + "<<b<<"i"<<endl;
        }
};
int main(){
    complex a,b,sum;
    a.Setnum(1,2);
    a.Printnum();
    
    b.Setnum(4,3);
    b.Printnum();
    
    sum.Sumcomplex(a,b);
    sum.Printnum();
    return 0;
}