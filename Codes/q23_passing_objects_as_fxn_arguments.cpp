#include <iostream>
using namespace std;

class complex
{
    int a, b;

public:
    void setnum(int n1, int n2);
    void sum(complex o1, complex o2);
    void printnum(void);
};

void complex::setnum(int n1, int n2)
{
    a = n1;
    b = n2;
}

void complex::sum(complex o1, complex o2)
{
    a = o1.a + o2.a;
    b = o1.b + o2.b;
}

void complex::printnum(void)
{
    cout << "Complex no: " << a << " + " << b << "i" << endl;
}

int main()
{
    complex c1, c2, c3;

    c1.setnum(1, 2);
    c1.printnum();

    c2.setnum(5, 10);
    c2.printnum();

    c3.sum(c1, c2);
    c3.printnum();

    return 0;
}