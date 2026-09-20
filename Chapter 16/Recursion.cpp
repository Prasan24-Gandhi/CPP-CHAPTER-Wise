#include<iostream>
using namespace std;

int factorial(int n){
    if (n<=1){
        return 1;
    }
    return n*factorial(n-1); //--> factorial here is imp which says this function runs till n=1

}
// Factorial of number 6:
// 6*5*4*3*2*1
// factorial of number 1 is 1
// factorial of number 0 is also 1
// factorial = n*n-1

int main(){
    int a;
    cout<<"Enter the number"<<endl;
    cin>>a;
    cout<<"The facotrial of number "<<a<<" is "<<factorial(a)<<endl; 
    return 0;
}