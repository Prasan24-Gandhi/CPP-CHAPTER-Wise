#include<iostream>
using namespace std;

class Employee{
    int id;
    static int count;
    public:
        void setdata(void){
            cout<<"Enter the id"<<endl;
            cin>>id;
            count++;
        }
        void getdata(void){
            cout<<"The id of this employee is "<<id<<endl;
        }

        static void getcount(void){
            cout<<"The value of count is "<<count<<endl;
        }
};

int Employee :: count; 



int main(){
    Employee rohan,prasan;
    rohan.setdata();
    rohan.getdata();
    Employee::getcount();
    
    prasan.setdata();
    prasan.getdata();
    Employee::getcount();
    return 0;
}