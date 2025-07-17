#include<iostream>
using namespace std;

class Base
{
public:
    void disp() { cout << "Base" << endl; }
};

class Derived : public Base
{
public:
    void disp() { cout << "Derived" << endl; }
};

int main()
{
    Derived d;
    d.disp();

    return 0;
}