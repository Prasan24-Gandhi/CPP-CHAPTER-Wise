#include<iostream>
#include<string>
#include<cmath>
using namespace std;

// greet function --> Takes information from user
void greet(){
    cout<<endl;
    cout<<"Hello User!! welcome to calculator"<<endl;
    cout<<endl;
    cout<<"Please select any one from below by number"<<endl;
    cout<<endl;
    cout<<"Normal calculator(1)"<<endl;
    cout<<"Scientifc calculator(2)"<<endl;
    cout<<"Hybrid calculator(3)"<<endl;
    cout<<endl;
    cout<<"--*----*----*----*----*----*----*----*----*----*----*----*--"<<endl;
    cout<<endl;
}

// Normal calculator --> [/ , * , + , -]
class calc{
    double a;
    double b;
    public:
    void set_num(double x1 ,double x2){
        a = x1;
        b = x2;
    }
    void expression(){
        cout<<endl;
        cout<<"Choose any one function from given below --> "<<endl;
        cout<<"Addition(+) , Multiplication(*) , Subtraction(-) , Division(/)"<<endl;
        cout<<endl;
        cout<<"--*----*----*----*----*----*----*----*----*----*----*----*--"<<endl;
        cout<<endl;
            string expres;
            cout<<"Here --> ";
            cin>>expres;
            if(expres == "+"){
                cout<<"Sum of number "<<a<<" and "<<b<<" is "<<a+b<<endl;
            }
            else if(expres == "-"){
                cout<<"Difference of number "<<a<<" and "<<b<<" is "<<a-b<<endl;
            }
            else if(expres == "*"){
                cout<<"Multiplication of number "<<a<<" and "<<b<<" is "<<a*b<<endl;
            }
            else if(expres == "/"){
                cout<<"Division of number "<<a<<" and "<<b<<" is "<<a/b<<endl;
            }
        }
};

// Scientific calculator --> [sqt , x^2 , x^3 , 10^x]
class scien{
    double a;
    public:
        void set_numx(double x){
            a = x;
        } 
        void solution(){
            cout<<endl;
            cout<<"Choose any one function from given below --> "<<endl;
            cout<<"Square root(sqrt) , Square(x2) , Cube(x3) , Multiplication to pie(pie)"<<endl;
            cout<<endl;
            cout<<"--*----*----*----*----*----*----*----*----*----*----*----*--"<<endl;
            cout<<endl;
                string expres;
                cout<<"Here --> ";
                cin>>expres;
            if (expres == "sqrt")
            {
                double reult = sqrt(a);
                cout<<"Square root of "<<a<<" is "<<reult<<endl; 
            }
            else if(expres == "x2")
            {
                cout<<"Square of number "<<a<<" is "<<a*a<<endl;
            }
            else if(expres == "x3")
            {
                cout<<"Cube of number "<<a<<" is "<<a*a*a<<endl;
            }
            else if(expres == "pie")
            {
                double mul = 3.14 *a;
                cout<<"Multiplication of number "<<a<<" with pie is "<<mul<<endl;
            }
            
        }

        
};

    class hybrid : public calc , public scien{
    double a;
    double b;
    public:
        void setnum(double x , double y){
            a = x;
            b = y;
        }
        void func(){
            cout<<endl;
            cout<<"Welcome to Hybrid Calculator"<<endl;
            cout<<endl;
            cout<<"Press 'n' for normal calculator "<<endl;
            cout<<"Press 's' for scientific calculator "<<endl;
            string f;
            cin>>f;
            if(f == "n")
            {
                double a,b;
                cout<<"Please enter the Numbers: "<<endl;
                cout<<"a -> ";
                cin>>a;
                cout<<"b -> ";
                cin>>b;
                set_num(a,b);
                expression();
            }
            else if(f == "s")
            {
                cout<<"Scientific calculator needs only one number "<<endl;
                cout<<"Enter the number: ";
                double num;
                cin>>num;
                set_numx(num);
                solution();
            }
        }
        
};
int main(){
    greet();
    int type;
    cout<<"Here --> ";
    cin>>type;
        if(type == 1){
            int a , b;
            cout<<"Enter number a --> "<<endl;
            cin>>a;
            cout<<"Enter number b --> "<<endl;
            cin>>b;
            calc user;
            user.set_num(a,b);
            user.expression();
        }
        else if(type == 2){
            int a;
            cout<<"Enter the number --> "<<endl;
            cin>>a;
            scien user;
            user.set_numx(a);
            user.solution();
        }
        else if(type == 3)
        {
            hybrid user;
            user.func();
        }
    cout<<endl;
    cout<<"Thank you!, Have a good day :)";
    return 0;
}