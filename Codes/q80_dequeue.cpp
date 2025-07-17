#include<iostream>
#include<deque>
using namespace std;

void display(deque<int> &dq){
    for(int i : dq){
        cout<<i<<" ";
    }
    cout<<endl;
}

int main(){
    deque<int> dq1 = {10, 20, 30};

    deque<int> :: iterator iter;
    
    cout<<"Initial deque:\n";
    // for(iter = dq1.begin(); iter != dq1.end(); iter++){
    //     cout<<*iter<<" ";
    // }

    // OR |||

    // Range-based for loop:
    for(int i : dq1){
        cout<<i<<" ";
    }
    cout<<endl;
    

    dq1.push_back(50);
    dq1.push_front(5);

    cout<<"After Pushing in Front and End:\n";
    display(dq1);

    dq1.pop_back();
    dq1.pop_front();
    cout<<"After popping:\n";
    display(dq1);

    // Erasing 2nd element
    dq1.erase(dq1.begin()+1);
    cout<<"Erasing 2nd element:\n";
    display(dq1);

    return 0;
}