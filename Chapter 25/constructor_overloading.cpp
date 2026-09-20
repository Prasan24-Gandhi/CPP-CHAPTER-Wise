#include<iostream>
using namespace std;

class complex{
    int a, b;
    public:
        complex(){
            a = 0;
            b = 0;
        }

        complex(int x ,int y){
            a = x;
            b = y;
        }
        complex(int x){
            a = x;
            b = 0; 
        }
        void print(void){
            cout<<"Your number is "<<a<<" + "<<b<<"i"<<endl;
        }
};
int main(){
    complex c1;
    c1.print();

    complex c2(9);
    c2.print();

    complex c3(1,8);
    c3.print();
    return 0;
}