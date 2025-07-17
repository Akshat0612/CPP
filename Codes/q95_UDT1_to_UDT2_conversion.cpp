#include <iostream>
#include <cmath>
using namespace std;

class Cartesian
{
    float xco, yco;

public:
    Cartesian(float x, float y)
    {
        xco = x;
        yco = y;
    }

    void display()
    {
        cout << "X_coordinate: " << xco << endl;
        cout << "Y_coordinate: " << yco << endl;
    }
};

class Polar
{
    float r, a;

public:
    Polar(float rad = 0, float ang = 0)
    {
        r = rad;
        a = ang;
    }

    operator Cartesian()
    {
        float x = r * cos(a);
        float y = r * sin(a);
        return Cartesian(x, y);
    }

    void display()
    {
        cout << "Radius: " << r << endl;
        cout << "Angle: " << a << endl;
    }
};

int main()
{
    Polar pol(10.0, 0.78);
    Cartesian cart = pol;
    cart.display();

    return 0;
}