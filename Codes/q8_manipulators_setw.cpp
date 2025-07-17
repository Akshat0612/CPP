#include<iostream>
#include<iomanip>
using namespace std;
int main(){
    int a=66,b=124,c=7888;

    cout<<"a without setw: "<<a<<endl;
    cout<<"b without setw: "<<b<<endl;
    cout<<"c without setw: "<<c<<endl;

    cout<<"a with setw: "<<setw(4)<<a<<endl;
    cout<<"b with setw: "<<setw(4)<<b<<endl;
    cout<<"c with setw: "<<setw(4)<<c<<endl;

    return 0;
}