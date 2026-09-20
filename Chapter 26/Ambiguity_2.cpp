#include<iostream>
using namespace std;
class a{
    public:
        void say(){
            cout<<"Hello everyone! "<<endl;
        }
};

class b:public a{
    int a; // this is for writing something(Not related to code/problem) 
    public:
        void say(){ // This function will replace (base a) function 
            cout<<"Hello beautiful People! "<<endl;
        }
        
};
int main(){
    a a;
    a.say();

    b b;
    b.say();
    return 0;
}