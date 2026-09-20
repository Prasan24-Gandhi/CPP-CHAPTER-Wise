#include<iostream>
#include<string>
using namespace std;

class infoo{
    int a;
    string n;
    public:
        void info(){
            cout<<"Enter the students name: "<<endl;
            cin>>n;
            cout<<"Enter the student's Id: "<<endl;
            cin>>a;
            cout<<"Student name is "<<n<<" and Id is "<<a<<endl;
        }
};

class marks{
    int ma;
    int sc;
    int en;
    int So;
    int ad;
    friend class out;
    public:
        int markss(){
            cout<<"Enter the marks of Maths: "<<endl;
            cin>>ma;
            cout<<"Enter the marks of Science: "<<endl;
            cin>>sc;
            cout<<"Enter the marks of english: "<<endl;
            cin>>en;
            cout<<"Enter the marks of Social Studies: "<<endl;
            cin>>So;
            cout<<"Enter the marks of additional: "<<endl;
            cin>>ad;
        }
};

class out{
    friend class resu;
    public:
        int Percentage(marks obj){
            float a = (100 * (obj.ma + obj.sc + obj.en + obj.So + obj.ad)/500);
            
            cout<<"Total percentage is "<<a<<"%"<<endl;\
            return a;
        }
        

};
class resu{
    public:
    void grade(float per){
        
        if(per<10){
            cout<<"F"<<endl;
        }
        else if(10<=per && per<20){
            cout<<"E"<<endl;
        }
        else if(20<=per && per<40){
            cout<<"C"<<endl;
        }
        else if(40<=per && per<60){
            cout<<"B"<<endl;
        }
        else if(60<=per && per<80){
            cout<<"B+"<<endl;
        }
        else if(80<=per && per<90){
            cout<<"A"<<endl;
        }
        else if(90<=per && per<100){
            cout<<"A+"<<endl;
        }
    }
};
int main(){
    infoo Parents;
    Parents.info();
    marks student;
    student.markss();
    out mark;
    float per = mark.Percentage(student);
    resu res;
    res.grade(per);
    return 0;
}