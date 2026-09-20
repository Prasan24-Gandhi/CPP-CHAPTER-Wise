#include<iostream>
using namespace std;

class Number{
    int num;
    public:
        Number(){
            num = 0;
        };
        Number(int a){
            num = a; 
        }
        void Display(){
            cout<<"The number of this object is "<<num<<endl;
        }

        // When no copy constructor is found , compiler supplies its own copy costructor.
        // Copy constructor
        Number(Number &obj){
            cout<<"Copy constructor called!!!"<<endl;
            num = obj.num;
        }
};
int main(){
    Number a(10),b,c(90);
    a.Display();
    b.Display();
    c.Display();

    Number c1(c);
    c1.Display(); // --> Copy constructor invoked

    Number c2 = a;
    c2.Display(); // --> Copy constructor invoked
    return 0;
}