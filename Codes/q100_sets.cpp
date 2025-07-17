#include<bits/stdc++.h>
using namespace std;

template<class T>
void display(set<T> &s){
    for(T i: s){
        cout<<i<<" ";
    }
    cout<<endl;
}

int main(){
    set<int> st;

/*
    SET doesnt support push() and pop()

    st.push(1);
    st.pop();
*/

    st.insert(1); //{1}
    st.insert(2); //{1,2}
    st.insert(2); //{1,2}
    st.insert(3); //{1,2,3}
    st.insert(5); //{1,2,3,5}
    display(st);
    
    auto it = st.find(3);
    // st.find(3) will return an iterator pointing to 3
    // cout<<it<<endl; ERROR: bcoz 'it' has stored an iterator, and we cant print iterator directly
    // cout<<&it<<endl; //Address of it
    cout<<*it<<endl; //Value at it
    
    auto iter = st.find(8); // 'it' will point to st.end() always in such a case
    
    
    st.erase(5); //erases 5 //Takes Logarithm time
    
    auto iti = st.find(3);
    st.erase(iti); //erases the value to which iti is pointing //Takes Constant time;
    display(st);
    
    cout<<endl;
    // Checking the presence of elements in a set
    cout<<st.count(5)<<endl;
    cout<<st.count(3)<<endl;
    cout<<st.count(1)<<endl;


    set<int> s2 = {1,2,3,4,5,6};
    auto it1 = s2.find(2);
    auto it2 = s2.find(4);
    s2.erase(it1,it2); //{1,4,5,6}
    display(s2);

    return 0;
}