#include<iostream>
#include<list>
using namespace std;

void display(list<int> &l){
    list<int> :: iterator it;
    for (it=l.begin(); it!= l.end(); it++)
    {
        cout<<*it<<" ";
    }
    cout<<endl;
}
int main(){
    list<int> list1; // Empty list
    list1.push_back(1);
    list1.push_back(2);
    list1.push_back(3);
    list1.push_back(4);
    list1.push_back(5);
    display(list1);

    list1.pop_back(); // Removes one element from back
    list1.pop_front(); // Removes one element from front
    list1.remove(4); // Removes from 4 from List
    cout<<endl;
    
    display(list1);
//-----------------------------------
    list<int> list2(3);//Empty list of size 3 elements
    list<int> :: iterator iter;
    iter = list2.begin();
    *iter = 12;
    iter++;
    *iter = 190;
    iter++;
    *iter = 112;
    iter++;
    display(list2);
    list2.sort(); // Sort the list in ascending order
    display(list2);

    list1.merge(list2); // Merge the list 2 in list 1
    list1.sort();
    display(list1);

    list1.reverse(); // Reverse the list 1
    display(list1);
    return 0;
}