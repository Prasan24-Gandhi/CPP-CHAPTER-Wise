#include<iostream>
using namespace std;

int main(){
    // Prasan --> Gandhi --> Saand * same person / function but diffrent name 

    float x = 12.1;
    float & c = x; // here "&" make the value of x and c variable same(12.1) 
    cout<<"The value of x is "<<x<<endl;
    cout<<"The value of c is "<<c<<endl;

    return 0;
}