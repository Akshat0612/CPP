#include <iostream>
#include <algorithm>
#include <functional>
using namespace std;

int main()
{
    int arr[] = {3, 44, 11, 23, 9, 21, 2, 1};
    // sort(arr, arr + 7); // Will sort first 7 elements
    // sort(arr, arr + 8); // Will sort first 8 elements

    // greater is a Functor
    sort(arr, arr + 8, greater<int>()); // Descending Order

    for (int i = 0; i < 8; i++)
    {
        cout << arr[i] << endl;
    }

    return 0;
}