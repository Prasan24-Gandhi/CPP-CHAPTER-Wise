#include<iostream>
using namespace std;

int main(){
    // Pointer --> Data type which holds the address of another pointer data type that holds adress of variable.
    int a =2;
    int* b = &a;
    int** c = &b;

    cout<<"The address of c is: "<<c<<endl;
    cout<<"The address of c is: "<<&b<<endl;
    cout<<"The value at address c is: "<<*c<<endl;
    cout<<"The value at address c (value at(b)) is: "<<**c<<endl;
    
    return 0;
}