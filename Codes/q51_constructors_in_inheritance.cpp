#include <iostream>
#include <iomanip>
using namespace std;

/*
Case1:
class B: public A{
   // Order of execution of constructor -> first A() then B()
};

Case2:
class A: public B, public C{
    // Order of execution of constructor -> B() then C() and A()
};

Case3:
class A: public C, public B{
    // Order of execution of constructor -> C() then B() and A()
};

Case4:
class A: public B, virtual public C{
    // Order of execution of constructor -> C() then B() and A()
};

*/

class Base1
{
protected:
    int data1;

public:
    Base1(int n1)
    {
        data1 = n1;
        cout << "Base1 Constructor called\n";
    }
    void print_base1(void)
    {
        cout << "The value of data1: " << setw(3) << data1 << endl;
    }
};

class Base2
{
protected:
    int data2;

public:
    Base2(int n2)
    {
        data2 = n2;
        cout << "Base2 Constructor called\n";
    }
    void print_base2(void)
    {
        cout << "The value of data2: " << setw(3) << data2 << endl;
    }
};

class Derived : public Base2, public Base1
{
    // NOTE: Base2 Constructor will be called first, bcoz Base2 is wriiten first while inheriting
protected:
    int der1, der2;

public:
    // NOTE: Even though in the following line, we have written Base1 first in constructor definition of Derived class,
    //       but still Base2 constructor will be called first bcoz Base2 is wriiten first while inheriting Derived class.
    Derived(int a, int b, int c, int d) : Base1(a), Base2(b)
    {
        der1 = c;
        der2 = d;
        cout << "Derived Constructor called\n";
    }
    void print_derived(void)
    {
        print_base1();
        print_base2();
        cout << "The value of der1: " << setw(4) << der1 << endl;
        cout << "The value of der2: " << setw(4) << der2 << endl;
    }
};

int main()
{
    Derived d1(1, 2, 3, 4);
    d1.print_derived();

    return 0;
}