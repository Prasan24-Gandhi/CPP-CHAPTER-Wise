#include<iostream>
#include <cmath>
using namespace std;

class point{
    friend int differ(point o1 , point o2);
    int x,y;
    public:
        point(int a ,int b){
            x = a;
            y = b;
        }
        void display(void){
            cout<<"The point is: ("<<x<<","<<y<<")"<<endl;
        }
};

int differ(point o1 , point o2){
    int dif = sqrt((o1.x-o2.x) + (o1.y-o2.y));
    cout<<"The Distance between two point is "<<dif<<endl;
}
int main(){
    point p(1,1);
    p.display();
    point l(1,1);
    l.display();
    differ(p,l);
    return 0;
}