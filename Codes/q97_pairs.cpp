#include <bits/stdc++.h>
using namespace std;

int main()
{
    pair<int, int> p1 = {1, 2};
    cout<<p1.first<<endl;
    cout<<p1.second<<endl<<endl;

    pair<int,pair<int,int>> p2 = {1,{2,3}};
    cout<<p2.first<<endl;
    cout<<p2.second.first<<endl;
    cout<<p2.second.second<<endl<<endl;

    pair<int,int> arr[] = {{1,2},{3,5},{18,45},{10,7}};
    cout<<arr[0].first<<endl;
    cout<<arr[0].second<<endl;
    cout<<arr[1].first<<endl;
    cout<<arr[1].second<<endl;
    cout<<arr[3].first<<endl;
    cout<<arr[2].second<<endl;
    
    return 0;
}