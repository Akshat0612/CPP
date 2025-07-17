#include<iostream>
using namespace std;
int volume(int l,int b,int h){
    return l*b*h;
}
int volume(int a){
    return a*a*a;
}
float volume(int r,int h){
    return 3.14*r*r*h;
}

int main(){
    int l,b,h,a,r;
    cout<<"Length of rectangle: ";
    cin>>l;
    cout<<"Breadth of rectangle: ";
    cin>>b;
    cout<<"Height of rectangle: ";
    cin>>h;
    cout<<"Side of square: ";
    cin>>a;
    cout<<"Radius of cylinder: ";
    cin>>r;

    cout<<"Volume of rectangle: "<<volume(l,b,h)<<endl;
    cout<<"Volume of square: "<<volume(a)<<endl;
    cout<<"Volume of cylinder: "<<volume(r,h)<<endl;

    return 0;
}