#include<iostream>
using namespace std;

void func(int a){
    cout<<"Function 1 is calling () "<<a<<endl;
}
template<class t>
void func(t b){
    cout<<"Template Function is calling () "<<b<<endl;
}
int main(){
    func(9); // By default function 1 will called
    func(9.0); // Template function will be called
    return 0;
}