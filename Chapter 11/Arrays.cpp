#include<iostream>
using namespace std;

int main(){
    // Array example 1
    int marks[] = {29 ,31, 213, 48};
    cout<<marks[0]<<endl;
    cout<<marks[1]<<endl;
    // We can change array for eg:
    marks[2] = 99; // Thevalue of 213 will be 99
    cout<<marks[2]<<endl;
    cout<<marks[3]<<endl;


    // Array example 2
    int mathmarks[4];
    mathmarks[0] =16;
    mathmarks[1] =190;
    mathmarks[2] =18;
    mathmarks[3] =146;

    cout<<"These are mathmarks"<<endl;
    cout<<mathmarks[0]<<endl;
    cout<<mathmarks[1]<<endl;
    cout<<mathmarks[2]<<endl;
    cout<<mathmarks[3]<<endl;
    return 0;
}