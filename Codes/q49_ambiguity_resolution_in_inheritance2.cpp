#include <iostream>
using namespace std;

class Base
{
public:
    void say()
    {
        cout << "Hello World\n";
    }
};

class Derived : public Base
{
public:
    // Derived's new say() method will override Base class's say() method
    void say()
    {
        cout << "Hello, How are you?\n";
    }
};

int main()
{
    Base b1;
    Derived d1;

    b1.say();
    d1.say();

    return 0;
}