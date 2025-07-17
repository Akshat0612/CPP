#include <iostream>
using namespace std;

class complex
{
    int a, b;
    friend complex sumcomplex(complex o1, complex o2);

public:
    void setnum(int n1, int n2);
    void printnum(void);
};

void complex::setnum(int n1, int n2)
{
    a = n1;
    b = n2;
}

void complex::printnum(void)
{
    cout << "Complex no: " << a << " + " << b << "i" << endl;
}

complex sumcomplex(complex o1, complex o2)
{
    complex o3;
    // o3.a=1; ERROR: Friend fxn sumcomplex can't access private vars as it is not a class member
    o3.setnum((o1.a + o2.a), (o1.b + o2.b));
    return o3;
}

int main()
{
    complex o1, o2, o3;

    o1.setnum(1, 2);
    o2.setnum(5, 10);
    o1.printnum();
    o2.printnum();

    o3 = sumcomplex(o1, o2);
    o3.printnum();

    return 0;
}