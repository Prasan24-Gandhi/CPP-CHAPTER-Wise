#include<iostream>
using namespace std;

class Base1{
    int value;
    public:
        Base1(int a){
            value = a;
        }
        void print_num1(){
            cout<<"Base 1 value is "<<value<<endl;
        }
};
class Base2{
    int value2;
    public:
        Base2(int a){
            value2 = a;
        }
        void print_num2(){
            cout<<"Base 2 value is "<<value2<<endl;
        }
};

class derived : public Base1 , public Base2{
    int value1,value2;
    public:
        derived(int a, int b, int c, int d):Base1(c) , Base2(d){
            value1 = a;
            value2 = b;
        }
        void printvalue(){
            cout<<"Value 1 --> "<<value1<<endl;
            cout<<"Value 2 --> "<<value2<<endl;
            print_num1();
            print_num2();
        }
};
int main(){
    derived prasan(1,2,3,4);
    prasan.printvalue();
    return 0;
}