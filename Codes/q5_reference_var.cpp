//Reference variables can be defined as another name for an already existing variable.
//These are also called an alias.
//For example, let us say we have a variable with the name of "sum", but we also want to use the same variable with the name of "add", to do that we will make a reference variable with the name of "add".
#include<iostream>
using namespace std;
int main(){
    int x=455;
    int &y=x;

    cout<<x<<endl;
    cout<<y<<endl;

    return 0;
}