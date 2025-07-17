#include<iostream>
using namespace std;
int main(){
    int age;
    cout<<"Enter age: ";
    cin>>age;

    switch(age){
        case 18: cout<<"Adult"<<endl;
        break;
        case 13: cout<<"Teen"<<endl;
        break;
        default:
        cout<<"Toddler"<<endl;
        break;
    }
    return 0;
}