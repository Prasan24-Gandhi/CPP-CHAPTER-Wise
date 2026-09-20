#include<iostream>
using namespace std;

template<class t1, class t2>
float finAvg(t1 a, t2 b){
    float  avg = (a+b)/2;
    return avg;
}

int main(){
    float a;
    a = finAvg(5, 2.4);
    printf("The average of these number is %.3f",a);
    return 0;
}