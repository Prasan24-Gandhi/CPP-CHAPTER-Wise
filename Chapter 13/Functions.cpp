#include<iostream>
using namespace std;

// Normal sum function used for adding two numbers

int sum(int a, int b){
    int c = a + b;
    return c;
} // We can use this function in our code anywhere 

int main(){
    int num1 ,num2;
    cout<<"Enter the number 1: "<<endl;
    cin>>num1;
    cout<<"Enter the number 2: "<<endl;
    cin>>num2;
    cout<<"The sum is "<<sum(num1 , num2)<<endl; // Here we use the sum function which we created
    return 0;
}
