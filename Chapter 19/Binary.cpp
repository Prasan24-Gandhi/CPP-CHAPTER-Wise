#include<iostream>
#include<string>
using namespace std;

class Binary{
    string s;

public: 
    void read(void);             // --> Inputs and read the number
    void chk_bin(void);          // --> Check that the number is binary or not
    void ones_compiliment(void); // --> Converts in one compliment (0 in 1) and (1 in 0)
    void Display(void);          // --> Displays the final number
};

void Binary :: read(void){
    cout<<"Enter the string "<<endl;
    cin>>s;
}


void Binary :: chk_bin(void){
    for (int i = 0; i < s.length(); i++)
    {
        if(s.at(i) != '0' && s.at(i)!='1'){
            cout<<("This is not an Binary statement")<<endl;
            exit(0);
        }
    }
    
}

void Binary :: ones_compiliment(void){
    for (int i = 0; i < s.length(); i++){
    if(s.at(i)=='0'){
        s.at(i) = '1';
    } 
    else{
        s.at(i) = '0';
    } 
    }
    cout<<endl;
}

void Binary :: Display(void){
    cout<<"Displaying your Binary digit"<<endl;
    for (int i = 0; i < s.length(); i++){
        cout << s.at(i);
    }
}

int main(){
    Binary b;
    b.read();
    b.chk_bin();
    b.Display();
    b.ones_compiliment();
    b.Display();
    return 0;
}