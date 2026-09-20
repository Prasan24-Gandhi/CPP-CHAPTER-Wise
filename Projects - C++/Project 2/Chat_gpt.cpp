#include <iostream>
#include <string>
using namespace std;

// Info --> Basic Info of student form user.
class info
{
    string name;
    int ID;
    int sci, mat, eng, ss;

    friend class fun;

public:
    void basic(void)
    {
        cout << "Weclome" << endl;
        cout << "Enter Student's First name --> ";
        cin >> name;
        cout << "Enter student's ID --> ";
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
    void print(void) // Fixed return type
    {
        cout << "-----------------------------------------" << endl;
        cout << "<-- Student's Information -->" << endl;
        cout << "Student's Name: " << name << endl;
        cout << "Student's Id: " << ID << endl;
        cout << "Class: 12th" << endl;
    }
};

class fun
{
public:
    int avg(info oo)
    {
        return (100 * (oo.mat + oo.sci + oo.eng + oo.ss) / 400);
    }
    char grade(info oo)
    {
        int average = avg(oo);
        cout << "Total Percentage: " << average << "%" << endl;
        cout << "Grade: ";

        if (average <= 10)
            return 'F';
        else if (average <= 30)
            return 'D';
        else if (average <= 50)
            return 'C';
        else if (average <= 70)
            return 'B';
        else if (average <= 80)
            return 'B+';
        else if (average <= 90)
            return 'A';
        else
            return 'A+';
    }
};

int main()
{
    info Prasan;
    Prasan.basic();
    Prasan.marks();
    Prasan.print();
    
    fun res;
    int percentage = res.avg(Prasan);
    cout << "Percentage: " << percentage << "%" << endl;
    cout << "Grade: " << res.grade(Prasan) << endl;
    
    return 0;
}
