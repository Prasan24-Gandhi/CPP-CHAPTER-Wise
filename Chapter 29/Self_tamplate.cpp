#include<iostream>
using namespace std;

template<class T>
class addition{
    public:
    T digit1;
    T digit2;
    addition(T a, T b){
        digit1 = a;
        digit2 = b;
    }
    void solution(){
        T sum = digit1 + digit2;
        cout<<"Addition of number "<<digit1<<" and "<<digit2<<" is "<<sum<<endl;
    }
};
int main(){
    addition<float>sol(1.9, 2.0);
    sol.solution();
    return 0;
}