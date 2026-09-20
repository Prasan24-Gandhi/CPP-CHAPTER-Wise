#include<iostream>
using namespace std;

int sum(int, int );

int main(){
    int num1 = 3221111;
    int num2 = 132222222;
    cout<<sum(num1, num2);

    return 0;
}

int sum(int a, int b){
    return a+b;
}