#include<bits/stdc++.h>
using namespace std;

int main(){
    priority_queue<int> pq;

    pq.push(5);
    pq.push(2);
    pq.push(8);
    pq.push(3);
    pq.push(10);

    cout<<pq.top()<<endl;

    pq.pop();

    cout<<pq.top()<<endl;

    cout<<endl;
    priority_queue<int> temp = pq;
    while(!temp.empty()){
        cout<<temp.top()<<endl;
        temp.pop();
    }

    return 0;
}