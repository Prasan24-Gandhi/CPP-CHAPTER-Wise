#include<iostream>
using namespace std;

enum meal {Omelete, chicken, rice, boiled_egg};
int main(){
    
    meal now = rice;
    cout<<"You are eating "<<now<<" meal of the day"<<endl;
    return 0;
}