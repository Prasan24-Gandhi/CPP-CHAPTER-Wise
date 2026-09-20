#include<iostream>
using namespace std;
class c2;
class c1{
    int valueV1;
    friend void Exchange_value(c1 & , c2 &);
    public:
        void setValue(int a){
            valueV1 = a;
        }
        void display(){
            cout<<valueV1;
        }
};

class c2{
    friend void Exchange_value(c1 & , c2 &);
    int valueV2;
    public:
        void setValue(int a){
            valueV2 = a;
        }
        void display(){
            cout<<valueV2;
        }
};

void Exchange_value(c1 &o1 , c2 &o2){
    int i = o1.valueV1;
    o1.valueV1 = o2.valueV2;
    o2.valueV2 = i;
}
int main(){
    c1 a;
    c2 b;
    a.setValue(9000);
    b.setValue(8000);

    cout<<"Value of c1 before exchanging:"  ;
    a.display();
    cout<<endl;
    cout<<"Value of c2 before exchanging:"  ;
    b.display();


    Exchange_value(a,b);
    cout<<endl;


    cout<<"Value of c1 after exchanging:"  ;
    a.display();
    cout<<endl;
    cout<<"Value of c2 after exchanging:"  ;
    b.display();
    return 0;
}