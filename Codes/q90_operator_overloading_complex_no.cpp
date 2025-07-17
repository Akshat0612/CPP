#include <iostream>
using namespace std;

class Complex
{
    int real, imaginary;

public:
    Complex(int r = 0, int i = 0)
    {
        real = r;
        imaginary = i;
    }

    Complex operator+(Complex& obj){
        Complex c;
        c.real = real + obj.real;
        c.imaginary = imaginary + obj.imaginary;
        return c;
    }

    void display(){
        cout<<real<<" + "<<imaginary<<"i\n";
    }
};

int main(){
    Complex c1(4,8);
    Complex c2(12,7);

    Complex c3 = c1 + c2;
    c3.display();

    return 0;
}