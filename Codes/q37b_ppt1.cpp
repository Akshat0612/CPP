#include <iostream>
using namespace std;

class A
{
    int i;

public:
    A() { i = 10; }
    void show() { cout << "i = " << i << endl; }
    A(A &obj)
    {
        i = 2 * obj.i;
    }
};
int main()
{
    A a1, a2(a1);
    a1.show();
    a2.show();

    return 0;
}
