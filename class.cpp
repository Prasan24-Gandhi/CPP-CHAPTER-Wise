#include<iostream>
using namespace std;

class data
{
    private:
    int code;
    public:
        string name; int age;

    void setdata(string n, int a, int c){
        name = n;
        age = a;
        code = c;  
    }
    void printdata(){
        cout<<"Your name is: "<<name<<endl;
        cout<<"Your age is: "<<age<<endl;
        cout<<"Your code is: "<<code<<endl;

    }

};

int main(){
    string name;
    int age;
    int code;

    // Input and ouput set
    cout<<"Enter your name"<<endl;
    getline(cin, name);
    cout<<"Enter your age"<<endl;
    cin>>age;
    cout<<"Enter your 4 digit code"<<endl;
    cin>>code;


    data pl1;
    pl1.setdata(name, age, code);
    pl1.printdata();
}