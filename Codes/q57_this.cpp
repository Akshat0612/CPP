#include <iostream>
using namespace std;

class A
{
    int a;

public:
    void setData(int a)
    // A & setData(int a) // setData is a reference variable here
    {
        this->a = a;
        // return (*this);
    }

    void getData()
    {
        cout << "The value of a is " << a << endl;
    }
};

int main()
{
    // this is a keyword which is a pointer which points to the object which invokes the member function
    // Here, this is a pointer (*this) which points to object a1, which invokes the member function (int a)
    A a1;
    a1.setData(4);
    // a1.setData(4).getData();
    a1.getData();
    return 0;
}