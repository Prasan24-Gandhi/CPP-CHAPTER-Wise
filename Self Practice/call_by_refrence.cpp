#include<iostream>
using namespace std;

void swap(int &a, int &b){
    int temp = a;
    a = b;
    b = temp;
}
int main(){
    int num1 = 1;
    int num2 = 2;
    cout<<num1<<" "<<num2<<endl;
    swap(num1, num2);
    cout<<num1<<" "<<num2<<endl;
    return 0;
}