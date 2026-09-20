// Write a 6 Table with the help of While loop

#include<iostream>
using namespace std;

int main(){
    cout<<"welcome to code"<<endl;
    int i =1;
    int p =6;
    
    // Same thing in Do-while 
    do
    {
     cout<<i*p<<endl;
     i++;   
    } while (i<=10);

    // Same thing in While loop
    while (i<=10)
    {
        cout<<i*p<<endl;
        i++;
    }
    
    // Same thing in for loop
    for (i = 1; i <= 10; i++)
    {
        cout<<i*p<<endl;
    }
    
    return 0;
}
