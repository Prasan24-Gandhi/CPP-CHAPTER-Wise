#include<iostream>
#include<vector>
using namespace std;
template <class t>
void display(vector <t> &v){
    cout<<"Displaying Vector: "<<endl;
    for (int i = 0; i < v.size(); i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl<<"Size of this Vector is "<<v.size()<<endl; // --> Displays the size of Vector (Total Number of Elements Vector Contains)
    cout<<endl;
}
int main(){
    
    vector<int> vector1; //Zero size integer Vector
    vector1.push_back(1);
    vector1.push_back(2);
    vector1.push_back(3);
    vector1.erase(vector1.begin()+1); // Erases the value of 2 from Vector
    auto it = vector1.begin();
    vector1.insert(it+1,31); // Insert value '31' at index 2
    display(vector1);
    
    vector<char> vector2(4); //4-elements character vector
    vector2[0]= 'A';
    vector2[1]= 'B';
    vector2[2]= 'C';
    vector2[3]= 'D';
    display(vector2);
    
    vector<char> vector3(vector2); // 4-element vector from vector2
    vector3.push_back('E');
    display(vector3);

    vector<int> vector4(4,2); // 4-element vector of 2s
    display(vector4);
    return 0;
}