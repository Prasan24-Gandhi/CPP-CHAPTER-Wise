#include<iostream>
#include<fstream>
using namespace std;

int main(){
    string str;   
    ofstream out;
    out.open("ll.txt");
    out<<"Hello \n";
    out<<"name \n";
    out<<"is Gandhi \n";
    out.close();

    ifstream in;
    in.open("ll.txt");
    while (in.eof()==0)
    {
        getline(in, str);
        cout<<str;
    }   
    in.close();
    return 0;
}