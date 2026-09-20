#include<iostream>
using namespace std;

class eq1{
    int a ,b;
    friend class eq2;
    public:
        void Entervalue(){
            cout<<"Enter a value"<<endl;
            cin>>a;
            cout<<"Enter a Total Value"<<endl;
            cin>>b;
        }
};

class eq2{
    public:
        int solution(eq1 obj){
            int a = obj.a;
            if(obj.b == 0){
                cout<<"Divide by 0 is not allowed."<<endl;
            }; 
            return (obj.a * 100)/obj.b;
        }
};

int main(){
    eq1 d;
    eq2 m;
    d.Entervalue();
    cout<<"Percetage: "<<m.solution(d)<<"%"<<endl;
    return 0;
}