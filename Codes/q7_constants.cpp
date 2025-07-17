#include<iostream>
using namespace std;
int main(){
    const int a=20;
    cout<<a<<endl;
    // a=40; // Will cause error, as 'a' was a constant variable
    cout<<a<<endl;
    
    return 0;
}