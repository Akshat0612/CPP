#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
using namespace std;

int main()
{
    vector<int> vec1 = {10, 20, 30, 40, 30};

    // Sorting vec1
    sort(vec1.begin(), vec1.end());
    // sort(vec1.begin(), vec1.end(), greater<int>()); //DESCENDING ORDER

    // Finding no of occurences of a value in vec1
    int count1 = count(vec1.begin(), vec1.end(), 30);

    // Finding first occurence of a value in vec1
    // It will return an iterator
    auto find_val = find(vec1.begin(), vec1.end(), 30);
    int index = find(vec1.begin(), vec1.end(), 30) - vec1.begin();

    // Sum of all elements
    int sum = accumulate(vec1.begin(), vec1.end(), 0);
    // 0 is the initial value

    cout<<"Sorted Vector: ";
    for(int i:vec1){
        cout<<i<<" ";
    }
    cout<<endl;

    cout<<"No of occurences of 30: "<<count1<<endl;

    if (index != vec1.size()) {
        cout << "First occurrence of 30 is at index: " << index << endl;
    } else {
        cout << "30 not found!" << endl;
    }

    cout<<"Sum of elements: "<<sum<<endl;

    int maxi=*(max_element(vec1.begin(),vec1.end()));
    cout<<"Maximum element: "<<maxi<<endl;

    int mini=*(min_element(vec1.begin(),vec1.end()));
    cout<<"Minimum element: "<<mini<<endl;

    return 0;
}