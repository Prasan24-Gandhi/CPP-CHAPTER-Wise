#include<iostream>
using namespace std;

int main(){
    for ( int i = 0; i < 10; i++)
    {
        cout<<i<<endl;
        if(i==2){
            break;
        }
    }
    // if cout comes after break statement then it doesn't print 2(Breaks on 2 withou including 2) , but if cout comes above if statement it prints 2 also(Breaks on 2 with including 2)
    return 0;
}