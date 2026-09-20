#include<iostream>
using namespace std;

class base1{
    public:
        void greet(){
            cout<<"Hello whats up!"<<endl;
        }
};
class base2{
    public:
        void greet(){
            cout<<"Kaise hoo"<<endl;
        }
};
class derive : public base1, public base2{
    public:
    void greet(){
        // class derived will use greet() function of base1
        base1::greet();
    }
};
int main(){
    // base1 a;
    // a.greet();  
    // base2 b;
    // b.greet();  
    derive d;
    d.greet();
    return 0;
}