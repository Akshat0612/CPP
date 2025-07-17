#include <iostream>
using namespace std;

class Number
{
    int a;

public:
    Number()
    {
        a = 00;
    }

    Number(int num)
    {
        a = num;
    }

    // Copy Constructor:
    Number(Number &obj)
    {
        cout << "Copy Constructor called !!!" << endl;
        a = obj.a;
    }

    void show()
    {
        cout << "The value of Number: " << a << endl;
    }
};

// NOTE: If there is no copy constructor, the program will generate its own default copy constructor

int main()
{
    Number x, y;
    Number z(18);

    Number z1(z); // Copy Constructor invoked
    Number z2 = z; // Copy Constructor invoked

    Number z3;
    z3 = z; // Copy Constructor not invoked

    Number z4(x); // Copy Constructor invoked

    x.show();
    y.show();
    z.show();
    z1.show();
    z2.show();
    z3.show();
    z4.show();

    return 0;
}