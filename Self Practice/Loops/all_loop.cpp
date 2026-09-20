#include<iostream>
using namespace std;

// All three different types of loop to print number from 1-10

int main(){
    // For loop
    cout<<"Using For Loop: "<<endl;
    for(int i =1; i<11; i++){
        cout<<i<<endl;
    }
    
    // While Loop
    int y = 1;
    cout<<"Using while loop: "<<endl;
    while(y<11){
        cout<<y<<endl;
        y++;
    }
    
    // while do 
    int z = 1;
    cout<<"Using while do loop: "<<endl;
    do{
        cout<<z<<endl;
        z++;
    }while(z<10);
    return 0;

}