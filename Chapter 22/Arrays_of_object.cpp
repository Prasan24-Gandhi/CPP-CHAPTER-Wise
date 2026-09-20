#include<iostream>
using namespace std;

class Employee{
    int Id;
    int salary;
    static int num;
    public:
        void setId(void){
            cout<<"Enter the id "<<endl;
            cin>>Id;
            num++;
        }
        void getId(void){
            salary =10000;
            cout<<"The id of the employee no "<<num <<" is "<<Id<<" and salary is "<<salary<<endl;
        }
};

int Employee :: num=0;

int main(){
    Employee ML[4];
    // With the Help of Using Loop
    for (int i = 0; i < 4; i++)
    {
        ML[i].setId();
        ML[i].getId();
    }
    


    return 0;
}