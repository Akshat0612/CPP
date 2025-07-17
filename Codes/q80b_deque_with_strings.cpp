#include<iostream>
#include<deque>
using namespace std;

template<class T>
void display(deque<T> &dq){
    // Range-based for-loop
    for(T i : dq){
        cout<<i<<" ";
    }
    cout<<endl;
}

int main(){
    deque<string> dq1 = {"AI","DS","OS"};

    deque<string> :: iterator iter;
    
    cout<<"Initial deque:\n";
    for(iter = dq1.begin(); iter != dq1.end(); iter++){
        cout<<*iter<<" ";
    }
    cout<<endl;
    // OR
    // display(dq1);
    

    dq1.push_back("DMS");
    dq1.push_front("DBMS");

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