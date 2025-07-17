#include <iostream>
using namespace std;

class Y;

class X
{
    int data;
    friend int sum(X a, Y b);

public:
    void setValue(int value)
    {
        data = value;
    }
};

class Y
{
    int entry;
    friend int sum(X a, Y b);

public:
    void setValue(int value)
    {
        entry = value;
    }
};

int sum(X a, Y b)
{
    return (a.data + b.entry);
}

int main()
{
    X a1;
    a1.setValue(2);

    Y b1;
    b1.setValue(7);

    int t_sum = sum(a1, b1);
    cout << "Sum: " << t_sum << endl;

    return 0;
}