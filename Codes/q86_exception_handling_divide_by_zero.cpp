#include<iostream>
using namespace std;

int main(){
    float a, b;
    cout<<"Enter a and b:\n";
    cin>>a>>b;

    try{
        if(b==0) throw b;
        else cout<<"a/b: "<<(a/b)<<endl;
    }
    catch(float x){
        cout<<"Divide by zero exception occured\n";
        return 0;
    }

    return 0;
}