#include<iostream>
#include<string>
using namespace std;

int main(){
    string name;
    getline(cin,name);
    cout<<name<<endl;
    
    if(name.compare("Akshat Goyal")==0){ // 0 - For Same; 1 - For Different
        cout<<"Same"<<endl;
    }else{
        cout<<"Different"<<endl;
    }

    return 0;
}