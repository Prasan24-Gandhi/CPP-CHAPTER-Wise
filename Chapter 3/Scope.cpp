#include<iostream>
using namespace std;
int glo = 2;
void sum(){
    int a;
    cout<< glo; // print global variable because there is no loacal varialable in sum
}
int main(){
    int glo = 10;
    glo = 78;
    int a = 2 , b =3;
    float pi = 12.11;
    char c = 'p';
    sum();
    // cout<< "Hello bave. \nThe value of a is "<<a<<". \nThe value of b is "<<b; 
    // cout<< ". \nThe value of pi is: "<<pi; 
    // cout<< ". \nThe value of c is: "<<c; 
    cout<< glo; // presidence always goes to local variable
    return 0;
}