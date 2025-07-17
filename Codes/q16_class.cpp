#include <iostream>
using namespace std;

class Employee
{
private:
    int a, b, c; // These Private variables can be accessed or manipulated by class members only
public:
    int d, e;
    void setdata(int a1, int b1, int c1); // Declaration only
    void getdata()
    {
        cout << "Value of a: " << a << endl;
        cout << "Value of b: " << b << endl;
        cout << "Value of c: " << c << endl;
        cout << "Value of d: " << d << endl;
        cout << "Value of e: " << e << endl;
    }
};

// Fxn Definition
void Employee ::setdata(int a1, int b1, int c1)
{
    a = a1;
    b = b1;
    c = c1;
}
// setdata() fxn can access and manipulate private variables as it is class member
// We can access and manipulate private variables a,b,c from outside of class(like from main() fxn also) by using setdata() fxn (as setdata() is a public fxn).

int main()
{
    Employee x;
    x.d = 34;
    x.e = 23;
    // x.a=1; Error bcoz 'a' is a private variable. so it cant be accessed directly
    x.setdata(1, 2, 5);
    x.getdata();

    return 0;
}