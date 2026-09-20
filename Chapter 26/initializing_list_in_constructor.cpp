#include<iostream>
using namespace std;

class test{
    int a;
    int b;
    public:
        test(int x, int y):a(x), b(y){ // rather than setting value in function we can set value by this normal syntax in constructor.
            cout<<"Constructor called"<<endl;
            cout<<"Value of a is "<<a<<endl;
            cout<<"Value of b is "<<b<<endl;
        }
};
int main(){
    test t(1,2);
    return 0;
}