#include<iostream>
using namespace std;

class eq1{
    public:
        int div(int a , int b , int c){
            cout<<"Enter the value of a"<<endl;
            cin>>a;
            cout<<"Enter the value of b"<<endl;
            cin>>b;
            c = a/b;
            cout<<"The value is "<<c<<endl;
        }
};

class eq2{
    public:
        int mul(eq1 c ,int e=100){
            int l =  e* e;
            cout<<"The percentage is "<<l<<"%"<<endl;
        }

};
int main(){
    eq1 lol;
    lol.div(1,2,3);
    eq2 final;
    int resu = final.mul(lol,100);
    return 0;
}