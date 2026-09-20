#include<iostream>
using namespace std;

class student{
    private:
        int Height , weight;
    public:
        int sst;
        int maths;
        int science;
        int english;
    void setData(int H1 ,int H2);
    void giveData(){
        cout<<"Student weight is "<<weight<<", and height is "<<Height<<endl;
        cout<<"Marks in SST is "<<sst<<endl;
        cout<<"Marks in Maths is "<<maths<<endl;
        cout<<"Marks in English is "<<english<<endl;
        cout<<"Marks in Science is "<<science<<endl;
    }
};

void student :: setData(int H1 ,int H2){
    Height = H1;
    weight = H2;
}

int main(){
    student Ramu;
    Ramu.sst = 60;
    Ramu.science = 30;
    Ramu.maths = 90;
    Ramu.english = 70;
    Ramu.setData(6,70);
    Ramu.giveData();
    return 0;
}