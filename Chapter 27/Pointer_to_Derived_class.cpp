#include<iostream>
using namespace std;
// Base class -> Father class
class Base{
    public:
    int val_Base;
    void display(){
        cout<<"Value of base class is "<<val_Base<<endl;
    }
};

// Derived class -> son class
class derived : public Base{
    public:
    int val_Deriv;
    void display(){
        cout<<"Value of Base class is "<<val_Base<<endl;
        cout<<"Value of derived class is "<<val_Deriv<<endl;
    }
};
int main(){
    Base * base_class_pointer; // --> Pointer of (Base) class
    Base obj_base; // --> Object of (Base) class
    derived obj_derived; // --> Object of (Derived) class
    base_class_pointer = &obj_derived; // --> Base class pointer points towards obj of derived class

    base_class_pointer->val_Base=90;
    // base_class_pointer->val_derived=190; --> it will throw an error
    base_class_pointer->display();
    
    cout<<"---------------------------------------------"<<endl; // --> not related to code just for giving good interface

    derived * derived_class_pointer; //--> Pointer of (derived) class
    derived_class_pointer = &obj_derived; // --> Derived class pointer points towards Derived class
    derived_class_pointer->val_Deriv=910;
    derived_class_pointer->display();
    return 0;
}