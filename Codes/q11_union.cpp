#include<iostream>
using namespace std;

union money{
    int rice;
    char car;
    float salary;
};

int main(){
    union money m1;
    m1.rice=33;
    cout<<m1.rice<<endl;

    return 0;
}