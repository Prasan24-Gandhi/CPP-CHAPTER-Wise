#include<iostream>
using namespace std;

int main(){
    // Pointer --> Data type which holds the address of other data type.
    int a =2;
    int* b = &a;

    // & --> (Address of) operator
    cout<<"The adress of a is "<<b<<endl;
    cout<<"The adress of a is "<<&a<<endl;

    // * --> (Value at) derefrence operator
    cout<<"The value at adress b is "<<*b<<endl;
    
    return 0;
}