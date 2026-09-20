#include<iostream>
using namespace std;

class complex{
    int visible , imaginary;
    public:
        void setdata(int a, int b){
            visible = a;
            imaginary = b;
        }
        void printdata(){
            cout<<"Visible part is "<<visible<<endl;
            cout<<"Imaginary part is "<<imaginary<<endl;
        }
};
int main(){
    // Pointers to object
    complex c1;
    complex *pntr = &c1;
    (*pntr).setdata(1,10);
    (*pntr).printdata();

    // Same thing with the help of another syntax
    complex*ptr = new complex;
    (*ptr).setdata(1,100);
    (*ptr).printdata();
    
    // Arrow operators -> used to acess mamber of a class thorugh a pointer.
    complex*pointer = new complex;
    pointer->setdata(90,10);
    pointer->printdata();

    return 0;
}