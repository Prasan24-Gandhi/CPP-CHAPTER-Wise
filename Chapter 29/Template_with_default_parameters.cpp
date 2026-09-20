#include<iostream>
using namespace std;

template<class t1=int, class t2=float, class t3=char> // --> Template with default parameters

class prasan{
    t1 a;
    t2 b;
    t3 c;
    public:
        prasan(t1 x, t2 y, t3 z){
            a = x;
            b = y;
            c = z;
        }
        void display(){
            cout<<"Value of a is "<<a<<endl;
            cout<<"Value of b is "<<b<<endl;
            cout<<"Value of c is "<<c<<endl;
        }
};
int main(){
    
    prasan<> p(1, 2.1, 'a'); // object of class with default parameters
    p.display(); 
    cout<<endl;

    prasan<float, char, char> h(1.2, 'f', 'b'); // Object of class with different parameters
    h.display();
    return 0;
}