#include <iostream>
using namespace std;

class Y;

class X
{
    int data;
    friend void exchange(X &a, Y &b);

public:
    void setValue(int value)
    {
        data = value;
    }

    void display(void)
    {
        cout << data << endl;
    }
};

class Y
{
    int entry;
    friend void exchange(X &a, Y &b);

public:
    void setValue(int value)
    {
        entry = value;
    }

    void display(void)
    {
        cout << entry << endl;
    }
};

void exchange(X &a, Y &b)
{
    int temp = a.data;
    a.data = b.entry;
    b.entry = temp;
}

int main()
{
    X a1;
    a1.setValue(5);

    Y b1;
    b1.setValue(10);

    exchange(a1, b1);

    cout << "Value of a1 after exchanging: ";
    a1.display();
    cout << "Value of b1 after exchanging: ";
    b1.display();

    return 0;
}