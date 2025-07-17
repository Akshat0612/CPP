#include <iostream>
using namespace std;

template <class T, int size>
void show(T a)
{
    cout << a << endl;
    cout << size << endl;
}

int main()
{
    show<char, 10>('a');

    return 0;
}