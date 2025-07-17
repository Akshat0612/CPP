#include <iostream>
#include <vector>
using namespace std;

template <class T>
void display(vector<T> &v)
{
    for (int i = 0; i < v.size(); i++)
    {
        // cout<<"Element "<<i+1<<": "<<v[i]<<endl;
        cout<<"Element "<<i+1<<": "<<v.at(i)<<endl;
    }
}

int main()
{
    vector<int> vec1; //Zero length vector
    int size;
    cout << "Enter Size of your Vector:\n";
    cin >> size;
    int element;
    for (int i = 0; i < size; i++)
    {
        cout << "Enter Element " << i + 1 << ": ";
        cin >> element;
        vec1.push_back(element);
    }

    vec1.pop_back(); //Removes last element of vector

    display(vec1);

    return 0;
}