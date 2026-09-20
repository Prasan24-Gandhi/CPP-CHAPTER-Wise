#include<iostream>
using namespace std;

int main(){
    int day;
    cout<<"Enter number of days (btw 1 to 7)"<<endl;
    cin>>day;

    switch(day)
    {
        case 1:
        cout<<"Monday";
        break;
        
        case 2:
        cout<<"Tuesday";
        break;
        
        case 3:
        cout<<"Wednesday";
        break;

        case 4:
        cout<<"Thursday";
        break;

        case 5:
        cout<<"Friday";
        break;
        
        case 6:
        cout<<"Saturday";
        break;

        case 7:
        cout<<"Sunday";
        break;

        default:
        cout<<"Enter input according to instruction";
        break;

    }

    cout<<"\nThank you:)";
    return 0;
}