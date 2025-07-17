#include<iostream>
using namespace std;
int main(){
    enum Meal{breakfast,lunch,dinner};
    cout<<breakfast;
    cout<<lunch;
    cout<<dinner;

    Meal m1=lunch;
    cout<<m1;

    return 0;
}