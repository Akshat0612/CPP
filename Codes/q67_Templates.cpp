#include <iostream>
using namespace std;

template <class T> // T can be int, float, char, etc...
// Parametrized class (Template) 'details' created
class details
{
    T *arr;
    int size;

public:
    details() {}
    details(T *arr)
    {
        // code
    }
    // and many other methods
};

int main()
{
    details<int> myVec1;                    // Object myVec1 with int created
    details<float> myVec2(/*paramter*/);    // Object myVec2 with float created
    return 0;
}