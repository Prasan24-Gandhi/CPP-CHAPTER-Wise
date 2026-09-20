#include<iostream>
using namespace std;
/*
Student -> Test and Sports
Test and Sports -> Result
*/

class Student{
    protected:
        int Roll_no;
        public: 
            void set_num(int x){
                Roll_no = x;
            } 
            void Print_num(){
                cout<<"Your Roll number is "<<Roll_no<<endl;
            }
};

class Test : virtual public Student{
    protected:
        float maths,physics;
    public:
        void set_marks(float x , float y){
            maths = x;
            physics = y;
        }
        void print_marks(){
            cout<<"Marks you obtained : "
            <<endl<<"Physics -> "<<physics
            <<endl<<"Maths -> "<<maths<<endl;
        }
};

class Sports :virtual public Student{
    protected:
        int a;
    public:
        void set_score(int x){
            a = x;
        }
        void print_score(){
            cout<<"Your PT score is "<<a<<endl;
        }
};

class Result : public Test , public Sports{
    public:
        void Display(){
            Print_num();
            print_marks();
            print_score();
            cout<<"Your total score is "<<maths+physics+a<<endl;
        }

};
int main(){
    Result Prasan;
    Prasan.set_num(1200);
    Prasan.set_marks(12.3 , 59.2);
    Prasan.set_score(9);
    Prasan.Display();
    return 0;
}