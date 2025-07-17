#include <iostream>
using namespace std;
int c = 45;

int main()
{
    int c = 18;
    cout << c << endl;
    cout << ::c << endl;

    return 0;
}