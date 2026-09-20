#include<iostream>
using namespace std;

// Function prototype --> it means we can use function anywhere which is anywhere in code. 

// int sum(int a ,int b); // --> This is acceptable
// int sum(int a , b); // --> This is not acceptable
int sum(int , int); // --> This is also acceptable
void greet();


int main(){
    int num1 ,num2;
    cout<<"Enter the number 1: "<<endl;
    cin>>num1;
    cout<<"Enter the number 2: "<<endl;
    cin>>num2;
    cout<<"The sum is "<<sum(num1 , num2)<<endl; 
    greet();
    return 0;
}

int sum(int a, int b){
    int c = a + b;
    return c;
} 
void greet(){
    cout<<"Thank you:)";
}