#include<iostream>
#include<string>
using namespace std;

int main()
{
    string n1, n2;

    cout<<"String 1: ";
    getline(cin,n1);
    cout<<"String 2: ";
    getline(cin,n2);

    cout<<"String concat: "<<n1+n2<<endl;

    return 0;
}