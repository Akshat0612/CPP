#include <iostream>
using namespace std;

class complex
{
    int a, b;

public:
    complex(int, int);

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

int main()
{
    complex c1(4, 6);            // Implicit call
    complex c2 = complex(5, 10); // Explicit call

    c1.display();
    c2.display();

    return 0;
}