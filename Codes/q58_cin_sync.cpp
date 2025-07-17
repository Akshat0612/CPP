#include<iostream>
#include<string>
using namespace std;

int main()
{
    int n;
    cout<<"How many chars?"<<endl;
    cin>>n;
    cin.sync(); //Used to free buffer space

    char *st = new char[n];
    cout<<"Enter string of atmost "<<n<<" characters:"<<endl;
    cin.getline(st,n);

    cout<<"You entered: "<<st<<endl;
    delete []st;

    return 0;
}