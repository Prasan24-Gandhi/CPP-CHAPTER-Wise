#include <iostream>
using namespace std;
class complex
{
    int a;
    int b;
    friend complex complexSum(complex o1 , complex o2);
public:
    void setNum(int v1, int v2)
    {
        a = v1;
        b = v2;
    }
    void Printnum(void)
    {
        cout << "The solution of complex number is " << a << " + " << b << "i" << endl;
    }
};
complex complexSum(complex o1 , complex o2){
    complex o3;
    o3.setNum((o1.a+o2.a), (o1.b+o2.b));
    return o3;
}
int main()
{
    complex c1 ,c2 ,sum;
    c1.setNum(1,2);
    c1.Printnum();
    
    c2.setNum(4,3);
    c2.Printnum();

    sum = complexSum(c1,c2);
    sum.Printnum();
    return 0;
}