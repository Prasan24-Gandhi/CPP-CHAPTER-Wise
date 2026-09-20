#include<iostream>
using namespace std;

// Base class-->
class Employee{
    float salary;
    public:
    int id;
        Employee(){};
        Employee(int inpId){
            id = inpId;
            cout<<id<<endl;
        }
};

// Derived Class Syntax -->
/*
class {{Derived Class_name}} : {{visibility_mode}} {{Base class name}}

NOTES -->
    * Private Visibility --> makes public object of bass class private in derived class
    * Public Visibility --> makes public object of bass class Public in derived class
*/

// Derived class -->
class Programmer : Employee{
    int languagecode;
    public:
        Programmer(int inID){
            id = inID;
            languagecode = 9;
        }
        void print(void){
            cout<<"Language code of programmer is "<<languagecode<<" and his/her ID is "<<id<<endl;
        }
};


int main(){
    Employee Prasan(1);
    Prasan;
    Programmer Ram(12);
    Ram.print();
    return 0;
}