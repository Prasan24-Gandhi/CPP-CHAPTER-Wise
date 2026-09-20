#include<iostream>
using namespace std;

int main(){
    // Typecasting is used to change the type of a variable
    int c =12;
    float l = 12.1;

    cout<<"The value of c is "<<float(c)<<endl; // convert "c int" in "float"  
      
    
    cout<<"The value of l is "<<int(l)<<endl; // convert "l float" into "int"

    
    cout<<"The expresion is "<<c+l<<endl; // output -->24.1
    cout<<"The expresion is "<<c+(int)l<<endl; // output -->24
    cout<<"The expresion is "<<c+int(l)<<endl; // output -->24
    return 0;
}