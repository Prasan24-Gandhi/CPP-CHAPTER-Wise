#include<iostream>
#include<fstream>

using namespace std;

int main(){
    // Connecting usage txt file with this code file
    ofstream Outp("usage.txt");

    // Getting input (name) from user
    string name;
    cout<<"Enter your name: "<<endl;
    cin>>name;

    // Printing/Writing name in text file and closing the code function of writing
    Outp<<name+" is my name ";
    Outp.close();

    // Connecting usage txt file and printing the file content
    ifstream InP("usage.txt");
    string content;
    InP>>content;
    cout<<"The content of this file is "+content;
    return 0;
}