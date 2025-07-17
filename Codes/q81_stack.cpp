#include<iostream>
#include<stack>
using namespace std;

int main(){
    stack<int> stk;
    stk.push(1);
    stk.push(11);
    stk.push(21);

    while(!stk.empty()){
        cout<<stk.top()<<" ";
        stk.pop();
    }
    cout<<endl;

    return 0;
}