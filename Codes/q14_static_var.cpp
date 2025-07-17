#include<iostream>
using namespace std;

int product(int a, int b){
    static int c=0;// No matter how many times we call this fxn, this will be initiated only once and will retain its value
    c=c+1;
    return a*b+c;
}

int main(){
    int x,y;
    cout<<"Enter x: ";
    cin>>x;
    cout<<"Enter y: ";
    cin>>y;

    cout<<"Product of a and b: "<<product(x,y)<<endl;
    cout<<"Product of a and b: "<<product(x,y)<<endl;
    cout<<"Product of a and b: "<<product(x,y)<<endl;
    cout<<"Product of a and b: "<<product(x,y)<<endl;
    cout<<"Product of a and b: "<<product(x,y)<<endl;

    return 0;
}