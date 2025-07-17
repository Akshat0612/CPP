#include<iostream>
#include<deque>
using namespace std;

int main(){
    deque<int> dq1 = {10, 20, 30};

    for(int i : dq1){
        cout<<i<<" ";
    }
    
    return 0;
}