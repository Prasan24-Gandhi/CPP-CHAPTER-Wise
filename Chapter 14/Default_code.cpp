#include<iostream>
using namespace std;

// It will not work.
void swap(int x , int y){ // tamp x y
    int tamp = x;         //  1   1 2
    x = y;                //  1   2 2
    x = tamp ;            //  1   2 1
}

int main(){
    int a = 1 ,b = 2 ; 
    cout<<"The value of a is "<<a<<" The value of b is "<<b<<endl;
    swap(a ,b); // --> It will not work.
    cout<<"The value of a is "<<a<<" The value of b is "<<b<<endl;

    return 0;
}