#include<iostream>
#include<iomanip> // A new manipulator in Program
using namespace std;

int main(){
    int a =1 , b =90 , c =1290;
    cout<<"The value of a without setw is "<<a<<endl;
    cout<<"The value of b without setw is "<<b<<endl;
    cout<<"The value of c without setw is "<<c<<endl;

    cout<<"The value of a with setw is "<<setw(4)<<a<<endl; // Give minimum width of 4
    cout<<"The value of b with setw is "<<setw(4)<<b<<endl; // Give minimum width of 4
    cout<<"The value of c with setw is "<<setw(4)<<c<<endl; // Give minimum width of 4

    return 0;
}