#include<iostream>
using namespace std;

class c2;
class c1{
    friend void exchange(c1 &, c2 &);
    int valv1;
    public:
        void ChangeVal(int a){
            valv1 = a;
        }
        void display(){
            cout<<valv1<<endl;
        }
};

class c2{
    friend void exchange(c1 &, c2 &);
    int valv2;
    public:
        void ChangeVal(int b){
            valv2 = b;
        }
        void display(){
            cout<<valv2<<endl;
        }
};

void exchange(c1 &a, c2 &b){
    int v = a.valv1;
    a.valv1 = b.valv2;
    b.valv2 = v;
}
int main(){
    c1 a;
    a.ChangeVal(12);
    c2 b;
    b.ChangeVal(90);
    exchange(a,b);
    cout<<"Value of a after exchanging: "<<endl;
    a.display();
    cout<<"Value of b after exchanging: "<<endl;
    b.display();
    return 0;
}