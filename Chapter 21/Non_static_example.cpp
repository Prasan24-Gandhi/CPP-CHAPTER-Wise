#include<iostream>
using namespace std;

int count=0; // Global Variable

class Employee{
    int id;
    public:
        void setdata(void){
            cout<<"Enter the id"<<endl;
            cin>>id;
            count++; // +1 the count everytime functions called
        }
        
        void getdata(void){
            cout<<"The id of this employee is "<<id<<" and this is employee no "<<count<<endl;
        }


};





int main(){
    Employee rohan,prasan;
    rohan.setdata();
    rohan.getdata();
    
    prasan.setdata();
    prasan.getdata();
    return 0;
}