#include <bits/stdc++.h>
using namespace std;

int main()
{
    multiset<int> ms;

    ms.insert(1); //{1}
    ms.insert(1); //{1,1}
    ms.insert(1); //{1,1,1}
    ms.insert(1); //{1,1,1,1}

    ms.erase(1); // erases all 1's

    int cnt = ms.count(1); // counts the no of 1's in ms

    ms.erase(ms.find(1)); // Only a single 1 will be deleted
    
    return 0;
}