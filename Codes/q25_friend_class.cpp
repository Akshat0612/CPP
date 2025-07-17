#include <iostream>
using namespace std;

class Calc;

class complex
{
    int a, b;
    friend class Calc;
    
    public:
    void setnum(int n1, int n2);
    void getnum(void);
};

class Calc
{
public:
    int add(int a1, int b1)
    {
        return (a1 + b1);
    }

    int sumRealComplex(complex, complex);
    int sumCompComplex(complex, complex);
};

void complex::setnum(int n1, int n2)
{
    a = n1;
    b = n2;
}

void complex::getnum(void)
{
    cout << "Complex No: " << a << " + " << b << "i" << endl;
}

int Calc::sumRealComplex(complex o1, complex o2)
{
    return (o1.a + o2.a);
}

int Calc::sumCompComplex(complex o1, complex o2)
{
    return (o1.b + o2.b);
}

int main()
{
    complex c1, c2;
    c1.setnum(1, 2);
    c1.getnum();
    c2.setnum(5, 20);
    c2.getnum();

    Calc cal;
    int real_res = cal.sumRealComplex(c1, c2);
    int comp_res = cal.sumCompComplex(c1, c2);

    cout << "Sum of real parts of c1 & c2: " << real_res << endl;
    cout << "Sum of complex parts of c1 & c2: " << comp_res << endl;

    return 0;
}