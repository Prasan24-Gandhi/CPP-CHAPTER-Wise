#include<iostream>
using namespace std;

// Function of multiplication which can be used in code anywhere
int multiplication(int a, int b){
    int c = a*b;
    return c;
}
// Function is always being made before main code (int main)

int main(){
    int num_1, num_2;

    cout<<"Enter number 1: ";
    cin>>num_1;
    cout<<"Enter number 2: ";
    cin>>num_2;

    cout<<"\nMultiplication of number "<<num_1<<" and "<<num_2<<" is "<<multiplication(num_1, num_2)<<endl; 
    return 0;
}