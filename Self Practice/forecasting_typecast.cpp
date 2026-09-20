#include<iostream>
using namespace std;

int main(){
    //  Let make first variable:
    int a = 1;
    
    //  Let make Second variable:
    int & b = a; // This lines defines that value of variable 'a' is also in Variable 'b'.

    cout<<"Value of Variable a: "<<a<<"\nValue of Variable b: "<<b<<endl;

    float c = 12.01;
    // For Forecasting (basically to convert variable c from float to integer value)
    cout<<"Value of variable 'c' "<<c<< " after forecasting: "<<int(c)<<endl;
    return 0;
}