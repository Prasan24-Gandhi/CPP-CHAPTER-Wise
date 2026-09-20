#include<iostream>
using namespace std;
// Base class 1
class base1{
    protected:
        int base1int;
    public:
        void set_base1(int a){
            base1int = a;
        }
};
// Base class 2
class base2{
    protected:
        int base2int;
    public:
        void set_base2(int a){
            base2int = a;
        }
};
/*
Syntax for derived class in multiple inheritance -->
    class class_name : {{Visibility_mode1}} {{base 1}} , {{Visibility_mode2}} {{base 2}}
*/
// Derived class
class derived : public base1 , public base2{
    public:
        void show(){
            cout<<"Value of base 1 is "<<base1int<<endl;
            cout<<"Value of base 2 is "<<base2int<<endl;
            cout<<"Sum of base 1 and 2 is "<<base1int + base2int<<endl;
        }
};
int main(){
    derived der;
    der.set_base1(12);
    der.set_base2(21);
    der.show();
    return 0;
}