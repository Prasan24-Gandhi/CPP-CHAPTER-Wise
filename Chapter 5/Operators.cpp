#include<iostream>
using namespace std;

int main(){
    int a=3, b=4;
    cout<<"Operators in c++"<<endl;
    cout<<"Following are the operators in c++"<<endl;

    // Arithmetic operators
    cout<<"The value of a+b is: "<<a+b<<endl;
    cout<<"The value of a-b is: "<<a-b<<endl;
    cout<<"The value of a*b is: "<<a*b<<endl;
    cout<<"The value of a/b is: "<<a/b<<endl;
    cout<<"The value of a%b is: "<<a%b<<endl;
    cout<<endl;

    // Increment and decrement operators
    cout<<"The value of a++ is: "<<a++<<endl; // Post increment --> First use, then increase
    cout<<"now a is "<<a<<endl;
    cout<<"The value of a-- is: "<<a--<<endl; // Post decrement --> First use, then decrease
    cout<<"now a is "<<a<<endl;
    cout<<"The value of --a is: "<<--a<<endl; // Pre decrement --> First decrease, then use
    cout<<"The value of ++a is: "<<++a<<endl; // Pre increment --> First increase, then use
    cout<<endl;

    // Assignment operator --> Assign the value in variable 
    // int a =2 ,b =3;
    // char n ='l';

    // Comparison operator
    cout<<"following are the comparison operator in c++"<<endl;
    cout<<"The value of a==b is "<<(a==b)<<endl;
    cout<<"The value of a!=b is "<<(a!=b)<<endl;
    cout<<"The value of a>=b is "<<(a>=b)<<endl;
    cout<<"The value of a<=b is "<<(a<=b)<<endl;
    cout<<"The value of a<b is "<<(a<b)<<endl;
    cout<<"The value of a>b is "<<(a>b)<<endl;
    cout<<endl;

    // Logical operator
    cout<<"The value of ((a==b) && (a<b)) is "<<((a==b) && (a<b))<<endl; // '&&' --> Print true if both (a==b) and (a<b) is true
    cout<<"The value of ((a==b) || (a<b)) is "<<((a==b) || (a<b))<<endl; // '||' --> print true if one of the flowwing((a==b) and (a<b)) is true
    cout<<"The value of (!(a==b)) is "<<(!(a==b))<<endl; // '!' reverse the reult conver true into false and false into true
    return 0;
}
