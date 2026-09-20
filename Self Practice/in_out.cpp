#include<iostream>
#include<string> // Used to create string Variable

using namespace std;

int main(){
    //   Before taking input from user we will create one empty variable to store users input

    int date , year ;
    string month; // String Variable 

    cout<<"Enter your Date of birth \n";
    cin>>date;
    
    cout<<"Enter your month of birth \n";
    cin>>month;
    
    cout<<"Enter your year of birth \n";
    cin>>year;

    cout<< "You are born on "<<date<<" "<<month<<" in year "<<year;
    return 0;
}