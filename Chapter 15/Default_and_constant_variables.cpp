#include<iostream>
using namespace std;

const float VIP = 1.2; // Constant variable = it is used to not to change and modify value of any variable later

float moneyRecieved(int currentmoney , float factor = 1.02){  // factor is a default variable
    return currentmoney * factor;
}
int main(){ 
    int money = 100000;
    cout<<"If you have "<<money<<" in your bank account you recieve "<<moneyRecieved(money)<<" in one year"<<endl; // here the def   ault variable will be used which is (1.02)
    cout<<"For VIP, If you have "<<money<<" in your bank account you recieve "<<moneyRecieved(money,VIP)<<" in one year"<<endl; // here the constant variable will be used which is (1.2)
    return 0;
}
