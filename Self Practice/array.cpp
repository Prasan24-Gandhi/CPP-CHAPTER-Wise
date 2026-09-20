#include<iostream>
using namespace std;

int main(){
    // array example
    int marks[] = {24,90,8,50};
    
    cout<<"Raw marks in array: {24,90,8,50} "<<endl;

    cout<<"Marks according to index: "<<endl;
    cout<<marks[0]<<endl;
    cout<<marks[1]<<endl;
    cout<<marks[2]<<endl; 
    cout<<marks[3]<<endl;


    // changing marks of index 2:
    cout<<"changing marks of index 2: "<<endl;
    marks[2] = 10;
    cout<<marks[2]<<endl;

    return 0;
}