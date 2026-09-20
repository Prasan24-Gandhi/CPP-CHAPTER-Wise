#include<iostream>
using namespace std;

class cls{
    public:
        cls(){
            cout<<"Constructor called!!"<<endl;
        }
        // Destructor -->
        ~cls(){ 
            cout<<"Destructor called!!"<<endl;
        }
};
int main(){
    cls m1;
    cout<<"Inside the main function"<<endl;
    return 0;
}