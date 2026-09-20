#include<iostream>
using namespace std;

int main(){
    for ( int i = 0; i <= 5; i++)
    {
        if(i==3){
            continue; // Continue--> skips and cuts the given value(3) from output
        }
        cout<<i<<endl;
    }
    
    return 0;
}