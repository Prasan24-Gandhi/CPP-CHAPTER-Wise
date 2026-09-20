#include<iostream>
using namespace std;

int main(){
    int marks[] = {29 ,31, 213, 48};

    // Pointers and array
    int* p = marks;
    cout<<"The value of marks[0] is "<<*p<<endl;
    cout<<"The value of marks[1] is "<<*(p+1)<<endl;
    cout<<"The value of marks[2] is "<<*(p+2)<<endl;
    cout<<"The value of marks[3] is "<<*(p+3)<<endl;
    cout<<"\n";

    
    // Some tricky question
    cout<<*(p++)<<endl; // Output --> 29
    cout<<*p<<endl; // Output --> 31
    cout<<*(++p)<<endl; // Output --> 213

    return 0;
}