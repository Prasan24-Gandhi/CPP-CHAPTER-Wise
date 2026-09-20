#include <iostream>
#include <string>
using namespace std;

class Shop
{
    int ItemID[100];
    int ItemPrice[100];
    string ItemName[100];
    int counter;

public:
    void initcounter() { counter = 0; }
    void GetPrice(void);
    void displayprice(void);
};

void Shop ::GetPrice(void)
{
    cout << "Enter the Name of item no " << counter << endl;
    cin >> ItemName[counter];
    cout << "Enter the Id of item no " << counter << endl;
    cin >> ItemID[counter];
    cout << "Enter the Price of item no " << counter << endl;
    cin >> ItemPrice[counter];
    counter++;
}

void Shop ::displayprice(void)
{
    for (int i = 0; i < counter; i++)
    {
        cout << "Price of " << ItemName[i] << " Id no " << ItemID[i] << " is " << ItemPrice[i] << endl;
    }
}

int main()
{
    Shop Mine;
    Mine.initcounter();
    int i = 0;
    while (i < 3)
    {
        Mine.GetPrice();
        i++;
    }
    Mine.displayprice();

    return 0;
}