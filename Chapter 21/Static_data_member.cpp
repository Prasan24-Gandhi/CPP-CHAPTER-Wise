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
            cout<<"The id of this employee is "<<id<<" and this is employee no "<<count<<endl;
        }
};
// Static Data Variable
int Employee :: count; // Default value is 0



int main(){
    Employee rohan,prasan;
    rohan.setdata();
    rohan.getdata();
    
    prasan.setdata();
    prasan.getdata();
    return 0;
}