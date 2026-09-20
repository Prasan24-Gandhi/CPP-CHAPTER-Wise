#include<iostream>
using namespace std;

inline int product(int a , int b){
    return a*b;
}

int main(){
    // int a =1 ,b =10;
    cout<<"Product of a and b is "<<product(1,10)<<endl;
    return 0;
}