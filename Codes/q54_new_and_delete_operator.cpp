#include <iostream>
using namespace std;
// NOTE: Only dynamically created memory, using new, can be deleted using delete operator.
int main()
{
    int a = 4;
    int *ptr = &a;
    cout << "Value of a: " << *ptr << endl;

    float *p = new float(40.78);
    // delete p;
    cout << "Value at address p: " << *p << endl;

    int *arr = new int[3];
    arr[0] = 10;
    *(arr + 1) = 20;
    arr[2] = 30;
    // delete[] arr;
    cout<<"Value of arr[0]: "<<arr[0]<<endl;
    cout<<"Value of arr[1]: "<<arr[1]<<endl;
    cout<<"Value of arr[2]: "<<arr[2]<<endl;

    return 0;
}