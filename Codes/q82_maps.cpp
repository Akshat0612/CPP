#include<iostream>
#include<map>
#include<string>
using namespace std;

int main(){
    map<string, int> marksMap;
    marksMap["Akshat"] = 99;
    marksMap["Mehul"] = 100;
    marksMap["Balkirat"] = 97;
    marksMap["Harsh"] = 89;

    marksMap.insert({{"Vansh",88},{"Manav",93}});

    map<string, int> :: iterator iter;
    for(iter = marksMap.begin(); iter != marksMap.end(); iter++){
        cout<<(*iter).first<<": "<<(*iter).second<<endl;
    }

    cout<<"Empty's return value: "<<marksMap.empty()<<endl;
    cout<<"Size of map: "<<marksMap.size()<<endl;
    cout<<"Maximum size of map: "<<marksMap.max_size()<<endl;

    return 0;
}