#include <iostream>
#include <vector>
using namespace std;

template <class T>
void display(vector<T> &v)
{
    for (int i = 0; i < v.size(); i++)
    {
        cout << "Element " << i + 1 << ": " << v[i] << endl;
    }
}

int main()
{
    vector<int> vec1;
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
    
    display(vec1);
    cout<<endl;

    vector<int> :: iterator iter = vec1.begin();
    // vec1.insert(iter, 5, 566 ); // Insert 5 copies of 566 at iter
    vec1.insert(iter+1, 5, 566); // Insert 5 copies of 566 at iter+1

    display(vec1);


    return 0;
}