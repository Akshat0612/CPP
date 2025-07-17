#include <iostream>
using namespace std;

class Test
{
    const int i;

public:
    // Way 1: Will produce error, bcoz it is an invalid syntax for accessing constant variables.
    // Test(int x){
    //     i=x;
    // }

    // Way 2: Correct way of dealing with constant variables
    Test(int x) : i(x) {} // It will act as a Parameterised constructor

    Test() : i(0) {}; // Default constructor

    void show()
    {
        cout << "i: " << i << endl;
    }
};

int main()
{
    Test t1, t2(20);
    t1.show();
    t2.show();

    return 0;
}