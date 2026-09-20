#include<iostream>
#include<map>
#include<string>
using namespace std;

int main(){
    map<string, int> marksMap;
    marksMap["Prasan"] = 12;
    marksMap["Rohan"] = 72;
    marksMap["Shyam"] = 62;

    // Add/Insert Gandhi 100 in Map
    marksMap.insert({"Gandhi", 100});

    // Making the iterator of Map. 
    map<string, int> :: iterator iter;
    
    for(iter = marksMap.begin(); iter!=marksMap.end(); iter++){
        cout<<(*iter).first<<" "<<(*iter).second<<endl;
    }

    return 0;
}