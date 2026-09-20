#include<iostream>
#include<string>
using namespace std;

int main(){
    cout<<"+,-,*,/"<<endl;
    string expression = "+,-,/,*";
    cin>>expression;
    if (expression == "+")
    {
        cout<<"sum"<<endl;
    }
    else if (expression == "-")
    {
        cout<<"Subtraction"<<endl;
    }
    else if (expression == "/")
    {
        cout<<"Division"<<endl;
    }
    else if (expression == "*")
    {
        cout<<"Multiplication"<<endl;
    }
    else{
        cout<<"Choose one from given expression";
    }
    
    
    return 0;
}