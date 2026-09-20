#include<iostream>
using namespace std;

// Call by reference using pointers
void swappointer(int* x , int* y){  // tamp x y
    int tamp = *x;                  //  1   1 2
    *x = *y;                        //  1   2 2
    *y = tamp ;                     //  1   2 1
}


int main(){
    int a = 1 ,b = 2 ; 
    cout<<"The value of a is "<<a<<" The value of b is "<<b<<endl;
    swappointer(&a , &b);
    cout<<"The value of a is "<<a<<" The value of b is "<<b<<endl;
    return 0;
}