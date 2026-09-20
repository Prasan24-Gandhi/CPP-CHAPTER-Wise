#include<iostream>
#include<string>
using namespace std;

class letter{
    private:
    int site_number; string site;
    public:
    string name; int phone_no;
    void setdata(int num, string site_name);
    void getdata(){
        cout<<"Hello "<<name<<endl;
        cout<<"Your site number is "<<site_number<<endl;
        cout<<"and your site name is "<<site<<endl;
        cout<<"\nWe will contact you on this number: "<<phone_no<<endl;
    }
};

void letter :: setdata(int num, string site_name){
    site_number = num;
    site = site_name;
}

int main(){
    letter prasan;
    prasan.name = "Prasan";
    prasan.phone_no = 8;
    prasan.setdata(2, "nawada"); // Here we can access and give value of private variable because we are calling that private variables in function (setdata) which is of same class where private variable is defined. 
    prasan.getdata();
    return 0;
}