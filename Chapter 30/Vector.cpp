#include<iostream>
#include<vector>
using namespace std;

// Vector is a container used to store value's. 

void display(vector<int> &v){
    for (int i = 0; i < v.size(); i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;
}
int main(){
    vector<int> vector1;
    int element,size;
    cout<<"Enter the size of Vector: "<<endl;
    cin>>size;
    for (int i = 0; i < size; i++)
    {
        cout<<"Enter the element of Vector: ";
        cin>>element;
        vector1.push_back(element);
    }
    vector<int>::iterator it = vector1.begin();
    // vector1.pop_back();
    vector1.insert(it+1,2,22);
    display(vector1);
    return 0;
}