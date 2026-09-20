#include<iostream>
using namespace std;

// swapping will not work
void swap(int a, int b){
    int temp = a;
    a = b;
    b = temp;
}
void swappointer(int* a, int* b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main(){
    int num_1 = 1;
    int num_2 = 2;
    cout<<"Value of a and b before swaping is "<<num_1<<" and "<<num_2<<endl;
    // After swaping
    swappointer(&num_1,&num_2);
    cout<<"Value of a and b after swaping is "<<num_1<<" and "<<num_2<<endl;
    
    return 0;
}