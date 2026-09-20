#include<iostream>
using namespace std;

class shop{
    int itemId[100];    // 100 is the limit of ID to store item in shop 
    int itemPrice[100]; // 100 is the limit of ID Price of stored item in shop
    int counter;
    public:
        void initcounter(void) {counter =0+1;}
        void setPrice(void);
        void displayPrice(void);
};

void shop :: setPrice(void){
    cout<<"Enter the Id of item no "<<counter<<endl;
    cin>>itemId[counter];
    cout<<"Enter the Price of item no "<<counter<<endl;
    cin>>itemPrice[counter];
    counter++;
}

void shop :: displayPrice(void){
    for (int i = 0; i < counter; i++)
    {
        cout<<"The price of item with ID "<<itemId[i]<<" is "<<itemPrice[i]<<endl;
    }
    
}

int main(){
    shop dukaan;
    dukaan.initcounter();
    int i = 0;
    while (i<101)
    {
        dukaan.setPrice();
        i++;
    }
    dukaan.displayPrice();
    
    return 0;
}