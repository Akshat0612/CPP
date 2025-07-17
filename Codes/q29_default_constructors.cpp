#include <iostream>
using namespace std;

class complex
{
    int a, b;

public:
    complex(void); // This is a default constructor as it takes no arguments

    void display(void)
    {
        cout << "Complex No: " << a << " + " << b << "i" << endl;
    }
};

complex::complex(void)
{
    a=10;
    b=20;
}

int main()
{
    complex c1,c2;

    c1.display();
    c2.display();

    return 0;
}