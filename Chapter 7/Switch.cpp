#include<iostream>
using namespace std;

int main()
{
    int age ;
    cout<<"Enter your age ";
    cin>>age;

    switch (age)
    {
    case 18:
        cout<<"You are 18"<<endl;
        break;
    case 20:
        cout<<"You are 20"<<endl;
        break;
    case 40:
        cout<<"You are 40"<<endl;
        break;
    default:
        break;
    }
    cout<<"Welcome";
    return 0;
}

