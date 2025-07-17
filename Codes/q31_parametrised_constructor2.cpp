#include <iostream>
using namespace std;

class point
{
    int a, b;

public:
    point(int, int);

    void display(void)
    {
        cout<<"( "<<a<<" , "<<b<<" )"<<endl;
    }
};

point::point(int x, int y)
{
    a = x;
    b = y;
}

int main()
{
    point c1(4,6);
    point c2 = point(2,9);

    c1.display();
    c2.display();

    return 0;
}