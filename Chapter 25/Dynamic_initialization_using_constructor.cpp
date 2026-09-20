#include<iostream>
using namespace std;

class Bankdeposit{
    int Principal;
    int Year;
    float interestRate;
    int returnValue;
    public:
        Bankdeposit(){} // --> Blank constructor
        Bankdeposit(int p , int y , float r);
        Bankdeposit(int p , int y , int R);
        void show();
};

Bankdeposit :: Bankdeposit(int p , int y , float r){
    Principal = p;
    Year = y;
    interestRate = r;
    returnValue = Principal;
    for (int i = 0; i < y; i++)
    {
        returnValue = returnValue * (1+interestRate);
        
    }
    
}
Bankdeposit :: Bankdeposit(int p , int y , int r){
    Principal = p;
    Year = y;
    interestRate = float(r)/100; // --> This says that first int value is divided by 100 and then change its data type into int to float.
    returnValue = Principal;
    for (int i = 0; i < y; i++)
    {
        returnValue = returnValue * (1+interestRate);
        
    }
    
}
void Bankdeposit :: show(){
    cout<<"Principal amount was "<<Principal<<" return value after "<<Year<<" is "<<returnValue<<endl;
}
int main(){
    Bankdeposit b1 , b2 , b3;
    int p,y;
    int R;
    float r;

    cout<<"Enter the principal , year and interest rate"<<endl;
    cin>>p>>y>>r;
    b1 = Bankdeposit(p,y,r);
    b1.show();

    cout<<"Enter the principal , year and interest rate"<<endl;
    cin>>p>>y>>R;
    b2 = Bankdeposit(p,y,R);
    b2.show();
    return 0;
}