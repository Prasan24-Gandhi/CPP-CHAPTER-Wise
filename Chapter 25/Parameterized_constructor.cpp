#include<iostream>
using namespace std;

class complex{
    int a , b;
    public:
        // Creating a constructor
        complex(int , int); // Constructor declaration
        void print(void){
            cout<<"Your number is "<<a<<" + "<<b<<"i"<<endl;
        }
}; 

complex :: complex(int x , int y ){ // --> Parameterized constructor as it takes two parameters
    a = x;
    b = y;
}

int main(){
    // Implictic call
    complex a(1,2);
    a.print();

    // Explictic call
    complex b = complex(2,8);
    b.print();
    return 0;
}