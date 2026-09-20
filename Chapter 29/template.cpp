#include<iostream>
using namespace std;

template<class t>
class vector{
    public:
    t * arr;
    int size;
        vector(int m){
            size = m; // Default Size of Vector
            arr = new t[size]; // Dynamic array -> run time memory allocate 
        }
        t dotproduct(vector &v){
            t d = 0;
            for (int i = 0; i < size; i++)
            {
               d += this->arr[i] * v.arr[i];
            }
            
            return d;
        }
};
int main(){
    
    vector <float> v1(3); // --> Vector 1
    v1.arr[0] = 1.0;
    v1.arr[1] = 1.2;
    v1.arr[2] = 0.0;
    
    vector <float> v2(3); // --> Vector 2
    v2.arr[0] = 1.1;
    v2.arr[1] = 0.0;
    v2.arr[2] = 1.4;

    float ans = v1.dotproduct(v2);
    cout<<ans;

    return 0;
}