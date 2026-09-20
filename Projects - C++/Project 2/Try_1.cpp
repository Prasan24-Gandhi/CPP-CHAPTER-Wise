#include <iostream>
#include <string>
using namespace std;

// Info --> Basic Info of student form user.
class info
{
    // Basic Info -->
    string name;
    int ID;
    // marks-->
    int sci;
    int mat;
    int eng;
    int ss;
    // connecting class fun and info -->
    friend class fun;
public:
    void basic(void)
    {
        cout << "Weclome" << endl;
        cout << "Enter Student's First name -->  ";
        cin >> name;
        cout << "Enter student's ID -->   ";
        cin >> ID;
    }
    void marks(void)
    {
        cout << "Enter Marks --->" << endl;
        cout << "Science: ";
        cin >> sci;
        cout << "English: ";
        cin >> eng;
        cout << "Social science: ";
        cin >> ss;
        cout << "Maths: ";
        cin >> mat;
    } 
    void print(void){
        cout<<"-----------------------------------------"<<endl;
        cout<<"<-- Student's Information -->"<<endl;
        cout<<"Student's Name: "<<name<<endl;
        cout<<"Student's Id: "<<ID<<endl;
        cout<<"Class: 12th"<<endl;
    }
};

class fun
{
public:
    int avg(info oo)
    {
        int avgg = (100 * (oo.mat + oo.sci + oo.eng + oo.ss) / 400);
        return avgg;
    }
    char grade(info oo)
    {
        int average = avg(oo);
        cout<<"Total Percentage: "<<average<<"%"<<endl;
        cout<<"Grade:- ";
        if (average < 10)
        {
            cout << "F" << endl;
        }
        else if (average > 11 & average <= 30)
        {
            cout << "D" << endl;
        }
        else if (average > 31 & average <= 50)
        {
            cout << "C" << endl;
        }
        else if (average > 51 & average <= 70)
        {
            cout << "B" << endl;
        }
        else if (average > 71 & average <= 80)
        {
            cout << "B+" << endl;
        }
        else if (average > 81 & average <= 90)
        {
            cout << "A" << endl;
        }
        else if (average > 91 & average <= 100)
        {
            cout << "A+" << endl;
        }
    }
};

int main()
{
    info Prasan;
    Prasan.basic();
    Prasan.marks();
    Prasan.print();
    fun res;
    res.avg(Prasan);
    res.grade(Prasan);
    return 0;
}