#include <bits/stdc++.h>
using namespace std;

int main()
{
    map<int, int> mpp;

    mpp[1] = 2;
    mpp.insert({3, 1});
    mpp.insert({2, 4});

    for (auto it : mpp)
    {
        cout << it.first << " " << it.second << endl;
    }
    cout << mpp[1]<<endl;
    auto it = mpp.find(3);
    cout << (*it).second;

    return 0;
}