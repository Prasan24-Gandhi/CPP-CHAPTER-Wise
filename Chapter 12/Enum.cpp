#include<iostream>
using namespace std;
// enum is a user define data type which assigns integer value only.

enum meal { Oats , chicken , soyabean , rice };
int main(){
    meal now = chicken;
    cout<<"I am eating "<<now<<endl;
    return 0;
}