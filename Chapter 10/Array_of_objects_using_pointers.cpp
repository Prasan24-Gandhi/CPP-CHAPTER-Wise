#include<iostream>
using namespace std;

class shop{
    int id;
    float price;
    public:
        void setdata(int a , float b){
            id = a;
            price = b;
        }
        void getdata(){
            cout<<"Item ID is "<<id<<endl;
            cout<<"Item price is "<<price<<endl;
        }
};
int main(){
    int size = 3;
    int p,l;
    float r;
    shop *ptr = new shop[3];
    shop*ptrtemp = ptr;
    for (int l = 0; l < size; l++)
    {
        cout<<"Enter ID and price of item "<<l+1<<endl;
        cin>>p>>r;
        ptr->setdata(p,r);
        ptrtemp++;
    }
    for (int l = 0; l < size; l++)
    {
        cout<<"Item number "<<l+1<<endl;
        ptr->getdata();
        ptrtemp++;
    }
    
    return 0;
}