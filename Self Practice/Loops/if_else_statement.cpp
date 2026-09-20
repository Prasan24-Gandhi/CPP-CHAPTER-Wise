#include<iostream>
using namespace std;

int main(){
    int age;
    cout<<"Enter your age: "<<endl;
    cin>>age;
    if(age>=18)
    {
        cout<<"You are an Adult";
    }
    else if((age<12)&&(age>0))
    {
        cout<<"You are an Kid";
    }
    else if((age>12)&&(age<18))
    {
        cout<<"You are an Teenage";
    }
    else
    {
        cout<<"You are in testicles of your father";
    }

    return 0;
}