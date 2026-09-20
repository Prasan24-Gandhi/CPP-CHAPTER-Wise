#include<iostream>
using namespace std;

template<class T1, class T2> // --> Template with Multiple parameter
class myclass{
    public:
    T1 data1; //--> Integer
    T2 data2; //--> Character
    myclass(T1 a, T2 b){
        data1 = a;
        data2 = b;
    }
    void display(){
        cout<<this->data1<<endl<<this->data2;
    }
};

int main(){
    myclass<int, char>obj(9, 'A');
    obj.display();
    return 0;
}