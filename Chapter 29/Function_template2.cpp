#include<iostream>
using namespace std;

// Making a template function for swaping two numbers-->
template <class t>
void swapp(t &a, t &b){
    t temp = a;
    a = b;
    b = temp;
}
int main(){
    int x = 1, y = 2;
    swapp(x,y);
    cout<<x<<endl<<y<<endl;
    return 0;
}