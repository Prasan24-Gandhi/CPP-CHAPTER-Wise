#include<iostream>
using namespace std;
// Making percentage calculator with the help of Friend class

class divide{
    int a;
    int b;
    friend int multiple :: mult(int mul , divide EnterTotalValue);
    public:
        int Enter(int v1 , int v2){
            v1 = a; 
            v2 = b;
            cout<<"Enter a value "<<endl;
            cin>>v1;
        }
        int EnterTotalValue(int v1 , int v2){
            v1 = a;
            v2 = b;
            cout<<"Enter a Total value"<<endl;
            cin>>v2;
        }
};

class multiple{
    int mul =100;
    public:
        int mult(int mul , divide EnterTotalValue){
        return ((EnterTotalValue)*100);
    }
};


int main(){
    
    return 0;
}