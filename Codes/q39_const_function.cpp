#include <iostream>
using namespace std;

class Test
{
    int x;

public:
    Test() { x = 0; }

    // void modify() const{
    //     x=0 //ERROR: Const fxn cant modify values
    // }

    Test(int a)
    {
        x = a;
    }

    void print() const
    {
        cout << "x: " << x << endl; // Valid as it is used for printing only
    }
};

int main()
{
    Test t1,t2(20);
    t1.print();
    t2.print();

    return 0;
}