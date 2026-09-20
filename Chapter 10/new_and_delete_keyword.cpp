#include<iostream>
using namespace std;

int main(){
    // Basic Example
    int a = 1000;
    int *adress = &a;
    cout<<"Adress of a is "<<*adress<<endl;

    // New Keyword / operator
    int*p = new int(1200); //--> we can make new data at adress by this
    cout<<"Adress of p is "<<*p<<endl;

    // Delete keyword / operator
    int *arry = new int[3];
    arry[0] = 1;
    arry[1] = 2;
    arry[2] = 3;
    delete arry;//--> Deletes the whole value of array except last
    cout<<"The value of arry0 is "<<arry[0]<<endl;
    cout<<"The value of arry1 is "<<arry[1]<<endl;
    cout<<"The value of arry2 is "<<arry[2]<<endl;

    return 0;
}