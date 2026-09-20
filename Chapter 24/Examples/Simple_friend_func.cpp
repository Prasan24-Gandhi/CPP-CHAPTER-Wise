#include<iostream>
using namespace std;
// Simple example of Friend function

class Y;
class X{
    int data;
    public:
        void setValue(int value){
            data = value;
        }
    friend void sum(X , Y);
};

class Y{
    int num;
    public:
    void setNum(int data){
        num = data;
    }
    friend void sum(X , Y);
};

void sum(X o1 , Y o2){
    cout<<"The Sum of Two number is "<<o1.data + o2.num<<endl;
}

int main(){
    X a1;
    a1.setValue(10);
    Y b1;
    b1.setNum(1902);
    sum(a1 , b1);
    return 0;
}