#include <iostream>
using namespace std;

class complex
{
    int a, b;

public:
    complex(int, int);
    complex(int);
    complex(void);

    void display(void)
    {
        cout << "Complex No: " << a << " + " << b << "i" << endl;
    }
};

complex::complex(int x, int y) // This is a parameterised constructor as it takes 2 arguments
{
    a = x;
    b = y;
}

complex::complex(void)
{
    a = 0;
    b = 0;
}

complex::complex(int x)
{
    a = x;
    b = 0;
}

int main()
{
    complex c1(4, 6);
    complex c2(5);
    complex c3;


    c1.display();
    c2.display();
    c3.display();

    return 0;
}