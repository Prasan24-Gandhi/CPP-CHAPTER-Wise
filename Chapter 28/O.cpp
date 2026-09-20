#include<iostream>
#include<fstream> // --> Without fstream there is no File I/O Possible 
using namespace std;

int main(){
    string st = "My name is Gandhi";
    string st2;

    // Used to open and write in file ->
    ofstream out("sample.txt");
    out<<st;

    // Used to open and read a file ->
    ifstream in("samplea.txt");
    in>>st2; // --> Give only one word from text file
    getline(in, st2); // --> Give only one line from text file
    cout<<st2; 
    return 0;
}