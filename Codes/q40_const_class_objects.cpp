#include <iostream>
using namespace std;

class Test
{
public:
    int i;
    Test() { i = 0; }
    // OR
    // Test():i(0){}

    Test(int y) : i(y) {}

    void setval(int x)
    {
        i = x;
    }

    void printfunc() const
    {
        cout << "i: " << i << endl;
    }
};

int main()
{
    const Test t1;
    const Test t2(20);

    t1.printfunc();
    t2.printfunc();

    // t1.i = 5;     // ERROR: Can't modify variables once the object is created
    // t1.setval(6); // ERROR: Const Object cant access non-const fxns. Also, We cant modify variables of a const object

    return 0;
}