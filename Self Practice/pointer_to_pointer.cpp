#include<iostream>
using namespace std;

int main(){
    int a =  5;
    int *b = &a;
    int **c = &b;

    cout<<"address of a: "<<&a<<endl;
    cout<<"value in b: "<<b<<endl;
    cout<<"value in c: "<<c<<endl;
    cout<<"\nValues"<<endl;
    cout<<"Value in a: "<<a<<endl;
    cout<<"Value on address b: "<<*b<<endl;
    cout<<"Value on address c: "<<**c<<endl;
    return 0;
}