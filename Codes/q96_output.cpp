#include <iostream>
using namespace std;

class Test
{
    int i;

public:
    Test() { i = 0; }
    Test operator()(int a) { return *this; }
    void show() { cout << i << endl; }
};

int main()
{
    Test t1;
    t1.show();
    t1 = t1(15);
    t1.show();

    return 0;
}