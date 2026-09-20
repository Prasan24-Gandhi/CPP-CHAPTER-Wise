#include<iostream>
using namespace std;

int main(){
    
    int a = 10, b = 3;
    
    // Two main arithmetic operators
    cout<<"Result of 10 % 3 = "<<a%b<<endl;
    cout<<"Result of 10 / 3 = "<<a/b<<endl;
    // Arithmetic operator left -> +, -,*

    // Increment and decrement operator -> 

    // Post increment
    cout<<"Result of 10++ will be "<<a++<<endl;
    cout<<"After increment 10 will be "<<a<<endl;
    
    cout<<"Result of 10-- will be "<<a--<<endl;
    cout<<"After increment 10 will be "<<a<<endl;
    
    // Pre increment
    cout<<"Result of ++10 will be "<<++a<<endl;
    cout<<"After increment 10 will be "<<a<<endl;
    
    cout<<"Result of --10 will be "<<--a<<endl;
    cout<<"After increment 10 will be "<<a<<endl;

    // Main comparison Operators:
    cout<<"result of a==b  "<<(a==b)<<endl; // if a and b is equal,if that's true then result is 1 and if not equal then 0
    cout<<"result of a!=b is "<<(a!=b)<<endl; // if a and b is not equal,if that's true then result is 1 and if not equal then 0
    cout<<endl;

    // Logical Operators:
    cout<< "1 for True and \n0 for false "<<endl;
    cout<<"Is (a!=b) and (a>b) both true: \n"<<((a!=b)&&(a>b))<<endl;
    cout<<"From (a==b) and (a>b) one of them is true: \n"<<((a!=b)||(a>b))<<endl;
    cout<<"Revrse the result of -> (Is (a!=b) and (a>b) both true:) \n"<<(!(a!=b)&&(a>b))<<endl;
    return 0;
}