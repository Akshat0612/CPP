#include <iostream>
using namespace std;

class A
{
    protected:
        int i;
        friend void show();

    public:
        A(int a) { i = a; }
};

class B : public A
{
    int j;
    friend void show(); //REMOVE THIS TO CHECK WORKING OF CODE

    public:
        B(int a, int b) : A(a) { j = b; }
};

void show()
{
    B b(-2, 55);
    cout << b.i << ", " << b.j;
    // ERROR: Friendship is not inherited
}

int main()
{ 
    show();
    return 0;
}