#include<iostream>
using namespace std;

int main(){
    int marks[] = {29 ,31, 213, 48};

    // Array with (for loop)
    for (int i = 0; i < 4; i++)
    {
        cout<<"The value of marks "<<i<<" is "<<marks[i]<<endl;
    }

    // Array with(while loop)
    int i = 0;
    while (i<4)
    {
        cout<<"The marks at "<<i<<" is "<<marks[i]<<endl;
        i++;
    }
    
    // Array with (while_do loop)
    int i = 0;
    do
    {
        cout<<"The marks at "<<i<<" is "<<marks[i]<<endl;
        i++;
    } while (i<4);
    return 0;
}