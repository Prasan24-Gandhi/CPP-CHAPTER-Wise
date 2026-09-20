#include<iostream>
using namespace std;

class base{
    public:
        int var_base;
        void print(){
            cout<<"Variable of base class is "<<var_base<<endl;
        }
};
class derive : public base{
    public:
        int var_deriv;
        void print(){
            cout<<"Variable of base class is "<<var_base<<endl;
            cout<<"Variable of Derived class is "<<var_deriv<<endl;
        }
};
int main(){
    base *base_pointer;
    base base_obj;
    derive derive_obj;
    base_pointer = &derive_obj;

    base_pointer->var_base=10;
    base_pointer->print();
cout<<"----------------------------"<<endl;
    derive *derive_pointer;
    derive_pointer= &derive_obj;
    derive_pointer->var_deriv=9090;
    derive_pointer->print();
    return 0;
}