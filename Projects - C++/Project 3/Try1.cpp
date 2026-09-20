#include<iostream>
#include<string>
using namespace std;

class calculator{
    int a;
    int b;
    public:
        void setNUm(int x,int y){
            a = x;
            b = y;
        }
        void expression(){
            cout<<"Choose one of the function: "<<endl;
            cout<<"Addition(+) , Difference(-) , Multiplication(*) , Division(/)"<<endl;
            cout<<"-------------------------------------------------------------"<<endl;
            string expre = "+,-,/,*";
            cout<<"Here: ";
            cin>>expre;
            if (expre == "+")
            {
                cout<<"Sum of number "<<a<<" and "<<b<<" is "<<a+b<<endl;
            }
            else if (expre == "-")
            {
                cout<<"Difference of number "<<a<<" and "<<b<<" is "<<a-b<<endl;
            }
            else if (expre == "*")
            {
                cout<<"Multiplication of number "<<a<<" and "<<b<<" is "<<a*b<<endl;
            }
            else if (expre == "/")
            {
                cout<<"Division of number "<<a<<" and "<<b<<" is "<<a/b<<endl;
            }
            
        }
};

int main(){
    int x1;
    int x2;
    cout<<"Enter Number a and b"<<endl;
    cin>>x1;
    cin>>x2;
    int l;
    cin>>l;
    if (l == 0)
    {
        calculator user;
        user.setNUm(x1 ,x2);
        user.expression();
    }
    else
    {
        cout<<"You entered wrong value";
    }
    return 0;
}