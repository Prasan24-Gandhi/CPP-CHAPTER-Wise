#include<iostream>
using namespace std;

class base{
    public:
        int var_base=12;
        virtual void print(){
            cout<<"1 Variable of base class is "<<var_base<<endl;
        }
};
class derive : public base{
    public:
        int var_deriv=10;
        void print(){
            cout<<"2 Variable of base class is "<<var_base<<endl;
            cout<<"2 Variable of Derived class is "<<var_deriv<<endl;
        }
};
int main(){
    base *base_pointer;
    base base_obj;
    derive derive_obj;
    base_pointer = &derive_obj;

    base_pointer->print();
    return 0;
}