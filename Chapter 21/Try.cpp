#include<iostream>
using namespace std;

class fun{
    int id;
    static int count;
    public:
        void setdata(void){
            cout<<"Enter the id: "<<endl;
            cin>>id;
            count++;
        }
        void getdata(void){
            cout<<"The id of emlpoyee number "<<count<<" is "<<id<<endl;
        }

};

int fun :: count;

int main(){
    fun Prasan , Rohan;
    Prasan.setdata();
    Prasan.getdata();

    Rohan.setdata();
    Rohan.getdata();
    return 0;
}