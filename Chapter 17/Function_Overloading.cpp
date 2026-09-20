#include<iostream>
using namespace std;

// Function Overloading --> it means having same name of functions in code but with Different Parameters (int , float , str)
// Example as follow:

double add(double a , double b){ // --> Gives the sum of two Double number.
    return a + b;
}
int add(int a , int b){ // --> Gives the sum of two int number.
    return a + b;
}
int add(int a , int b , int c){ // --> Gives the sum of three int number.       
    return a + b + c;
}

int main(){
    cout<<"Sum of Two Double number 12.1 and 13.2 is "<<add(12.1 ,13.2)<<endl;
    cout<<"Sum of Two Integer number 12 and 13 is "<<add(12 ,13)<<endl;
    cout<<"Sum of Two Float number 12  ,11 and 13 is "<<add(12, 11 ,13)<<endl;
    return 0;
}