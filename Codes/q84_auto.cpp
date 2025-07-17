#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> vec1 = {10, 20, 30, 40, 50};

    // Using auto, we dont have to manually create iterator for traversing vec1
    for(auto iter = vec1.begin(); iter != vec1.end(); iter++){
        cout<<*iter<<endl;
    }
    
    return 0;
}