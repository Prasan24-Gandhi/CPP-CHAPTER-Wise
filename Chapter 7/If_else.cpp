#include<iostream>
using namespace std;

int main()
{
    int age ;
    cout<<"Enter your age ";
    cin>>age;

    if((age<18) && (age>0))
    {
        cout<<"You are not adult";
    }
    else if (age==18)
    {
        cout<<"You are kid get a kid pass";
    }
    else if (age<=0)
    {
        cout<<"you are not born yet";
    }
    else{
        cout<<"Your welcome";
    }
    return 0;
}
