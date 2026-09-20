#include<iostream>
using namespace std;

int main(){
    // Array
    int marks_percentage[] = {10, 90, 87, 12, 33};
    // Loop

    // Using While LOOP
        int i = 0;
        while(i<5){
            cout<<"Marks percentage of "<<i<<" = "<<marks_percentage[i]<<endl;
            i++;
        }

    // Using For loop
        for(int i = 0; i<5; i++){
            cout<<"Marks percentage of "<<i<<" = "<<marks_percentage[i]<<endl;
        }
    
    // Using do while loop
    int i = 0;
        do{
            cout<<"Marks percentage of "<<i<<" = "<<marks_percentage[i]<<endl;
            i++;
        }while(i<5);
    return 0;
}