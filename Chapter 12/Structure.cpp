#include<iostream>
using namespace std;

// A structure is a user-defined data type that stores multiple variables of different data types at separate memory locations. Each member has its own memory space.

struct about
{
    int dob; 
    char name; 
    float age; 
};
int main(){
    about prasan;
    prasan.age = 17.5;
    prasan.dob = 24;
    prasan.name = 'p';

    about rohan;
    rohan.age = 18;
    rohan.dob = 112;
    rohan.name = 'r';

    about shyam;
    shyam.age = 12;
    shyam.dob = 90;
    shyam.name = 's';

    cout<<"The age of prasan is "<<prasan.age<<endl;
    cout<<"The dob of rohan is "<<rohan.dob<<endl;
    cout<<"The name of shyam is "<<shyam.name<<endl;

    return 0;
}