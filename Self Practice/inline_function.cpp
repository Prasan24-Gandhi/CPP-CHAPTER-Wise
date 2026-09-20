#include<iostream>
using namespace std;

inline int product(int a, int b){
    return a*b;
}

int main(){
    int num1 = 2;
    int num2 = 235789789;

    cout<<"Product of "<<num1<<" and "<<num2<<" is "<<product(num1,num2)<<endl;

    return 0;
}