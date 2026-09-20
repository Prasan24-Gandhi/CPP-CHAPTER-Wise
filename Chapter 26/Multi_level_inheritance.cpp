#include<iostream>
using namespace std;
// base class
class student{
    protected:
    int roll_no;
    public:
        void set_rollNO(int);
        void get_rollNO();
};
void student :: set_rollNO(int a){
    roll_no = a;
}
void student :: get_rollNO(){
    cout<<"The roll no is "<<roll_no<<endl;
}

// Derivative class and base class for (result)
class exam : public student{
    protected:
        float Physics;
        float maths;
    public: 
        void set_marks(float,float);
        void get_marks();
};
void exam :: set_marks(float a , float b){
    maths = a;
    Physics = b;
}
void exam :: get_marks(){
    cout<<"Marks of maths is "<<maths<<endl;
    cout<<"Marks of Physics is "<<Physics<<endl;
}

// Derivative class from base class student and exam
class result : public exam{
    float percentage;
    public:
        void display_Percentage();
};
void result :: display_Percentage(){
    get_rollNO();
    get_marks();
    cout<<"Total percentage is "<<(maths+Physics)/2<<"%"<<endl;
}
int main(){
   result prasan;
   prasan.set_rollNO(90);
   prasan.set_marks(98.1 , 12.9);
   prasan.display_Percentage();
    return 0;
}