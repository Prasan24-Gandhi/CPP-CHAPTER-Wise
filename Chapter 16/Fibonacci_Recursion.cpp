#include<iostream>
using namespace std;

// Fibonacci-->
int fib(int n){
    if(n<=1){
        return n;
    }
    return fib(n-1) + fib(n-2);
}

// Fibonacci of 6 is
//  f(6)
//  f(5) + f(4)
//  f(5) = 5
//  f(4) = 3

int main(){
    int a;
    cout<<"Enter the number"<<endl;
    cin>>a;
    cout<<"The fibonacci of number "<<a<<" is "<<fib(a)<<endl;
    return 0;
}
