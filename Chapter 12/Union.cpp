#include<iostream>
using namespace std;

// A union is a user-defined data type where multiple variables share the same memory location. Only one member can store a value at a time.

// union give one correct value and use less memory compare to structure 

union money
{
    int rice;
    char car;
    float pounds;
};
int main(){
    money ram;
    ram.car = 'l';
    ram.pounds = 12.00;
    ram.rice = 90;

    cout<<ram.car<<endl;
    cout<<ram.pounds<<endl;
    cout<<ram.rice<<endl;
    return 0;
}