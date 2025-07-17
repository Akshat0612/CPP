#include<iostream>
using namespace std;

inline int product(int a, int b){
    return a*b;
}
// Replaces product(x,y) with x*y for all product fxns at run time, thereby reducing fxn call overhead.

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
    cout<<"Product of a and b: "<<product(x,y)<<endl;
    cout<<"Product of a and b: "<<product(x,y)<<endl;
    cout<<"Product of a and b: "<<product(x,y)<<endl;
    cout<<"Product of a and b: "<<product(x,y)<<endl;
    cout<<"Product of a and b: "<<product(x,y)<<endl;

    return 0;
}