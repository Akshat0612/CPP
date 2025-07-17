#include <iostream>
using namespace std;

class Base1
{
protected:
    int base1_int;

public:
    void setbase1(int a)
    {
        base1_int = a;
    }
};

class Base2
{
protected:
    int base2_int;

public:
    void setbase2(int a)
    {
        base2_int = a;
    }
};

class Base3
{
protected:
    int base3_int;

public:
    void setbase3(int a)
    {
        base3_int = a;
    }
};

class Derived : public Base1, public Base2, public Base3
{
public:
    void show()
    {
        cout << "The value of Base1 is " << base1_int << endl;
        cout << "The value of Base1 is " << base2_int << endl;
        cout << "The value of Base1 is " << base3_int << endl;
        cout << "The Sum of these values is " << base1_int + base2_int + base3_int << endl;
    }
};
/*
The inherited derived class will look something like this:
Data members:
    basel_int --> protected
    base2_int --> protected
    base3_int --> protected
Member functions:
    setbasel() --> public
    setbase2() --> public
    setbase3() --> public
    show()     --> public
*/
int main()
{
    Derived der;
    der.setbase1(18);
    der.setbase2(45);
    der.setbase3(7);
    der.show();

    return 0;
}