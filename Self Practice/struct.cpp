#include<iostream>
using namespace std;

//  Making structure for myself
struct self{
    int age;
    float percentage ;
    char character ;
};

int main(){
    self person_1;
    person_1.age = 18;
    person_1.percentage = 19.1;
    person_1.character = 'a';

    self person_2;
    person_2.age = 12;
    person_2.percentage = 20.0;
    person_2.character = 'v';

    cout<<"PERSON 1 DATA"<<endl;
    cout<<"Age of Person 1 is "<<person_1.age<<endl;
    cout<<"Percentage of Person 1 is "<<person_1.percentage<<endl;
    cout<<"Character of Person 1 is "<<person_1.character<<endl;

    cout<<"\nPERSON 2 DATA"<<endl;
    cout<<"Age of Person 2 is "<<person_2.age<<endl;
    cout<<"Percentage of Person 2 is "<<person_2.percentage<<endl;
    cout<<"Character of Person 2 is "<<person_2.character<<endl;

    

    return 0;
}