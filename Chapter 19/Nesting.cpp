#include<iostream>
#include<string>
using namespace std;

/*Nesting of Member Functions in C++
 --> in this code we didn't have to call functions again and again in main command we nested a function in predefined function. */

class Binary{
    string s;

public: 
    void read(void);             // --> Inputs and read the number
    void chk_bin(void);          // --> Check that the number is binary or not
    void ones_compiliment(void); // --> Converts in one compliment (0 in 1) and (1 in 0)
    void Display(void);          // --> Displays the final number
};

void Binary :: read(void){
    cout<<"Enter the string: "<<endl;
    cin>>s;
}


void Binary :: chk_bin(void){
    read();
    for (int i = 0; i < s.length(); i++)
    {
        if(s.at(i) != '0' && s.at(i)!='1'){
            cout<<("This is not an Binary statement")<<endl;
            exit(0);
        }
    }
    
}

void Binary :: ones_compiliment(void){
    chk_bin();
    for (int i = 0; i < s.length(); i++){
    if(s.at(i)=='0'){
        s.at(i) = '1';
    } 
    else{
        s.at(i) = '0';
    } 
    }
}

void Binary :: Display(void){
    cout<<"Displaying your Binary digit: "<<endl;
    for (int i = 0; i < s.length(); i++){
        cout << s.at(i);
    }
}

int main(){
    Binary b;
    b.ones_compiliment();
    b.Display();
    return 0;
}
