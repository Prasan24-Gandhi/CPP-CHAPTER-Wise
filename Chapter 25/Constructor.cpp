#include<iostream>
using namespace std;

class complex{
    int a , b;
    public:
        // Creating a constructor
        complex(void); // Constructor declaration
        void print(void){
            cout<<"Your number is "<<a<<" + "<<b<<"i"<<endl;
        }
    };  

complex :: complex(void){ // ---> Default constructor as it accepts zero parameters 
    a = 10;
    b = 50;
}

int main(){
    complex c1;
    c1.print();
    return 0;
}