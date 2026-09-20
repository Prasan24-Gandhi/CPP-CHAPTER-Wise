#include<iostream>
using namespace std;

class A{
    int a;
    public:
        void setdata(int a){
            this->a = a; // clarify that (this->a) is (private) object of class A , while a is also the parameter of function setdata()
        }
        void getdata(){
            cout<<"Value of a is "<<a<<endl;
        }
};
int main(){
    A b;
    b.setdata(4);
    b.getdata();
    return 0;
}