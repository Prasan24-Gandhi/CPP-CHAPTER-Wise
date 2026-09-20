#include <iostream>
using namespace::std;
int main(){
    int a = 10;
    int* b = &a;
    cout<<a<<endl; // 10
    cout<<b<<endl; // xxxx
    cout<<*b<<endl;// 10
}