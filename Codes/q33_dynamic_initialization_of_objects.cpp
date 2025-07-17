// NOTE: The program will decide at runtime that which constructor is used.
//       So, it is dynamic initialisation of objects using constructors.

#include <iostream>
using namespace std;

class Bankdeposit
{
    int principal;
    int years;
    float Rateofinterest;
    float returnValue;

public:
    Bankdeposit(){} // It will cause an error if we dont create a default constructor (even if we dont make use of it, it is necessary)
    Bankdeposit(int, int, float);
    Bankdeposit(int, int, int);
    void show(void);
};

Bankdeposit ::Bankdeposit(int p, int y, float r)
{
    principal = p;
    years = y;
    Rateofinterest = r;
    returnValue = principal;

    for (int i = 0; i < years; i++)
    {
        returnValue = returnValue * (1 + Rateofinterest);
    }
}

Bankdeposit ::Bankdeposit(int p, int y, int R)
{
    principal = p;
    years = y;
    Rateofinterest = float(R) / 100;
    returnValue = principal;

    for (int i = 0; i < years; i++)
    {
        returnValue = returnValue * (1 + Rateofinterest);
    }
}

void Bankdeposit::show(void)
{
    cout << "Return value for Principal: " << principal << " after " << years << " years is: " << returnValue << endl;
}

int main()
{
    int p, y, R;
    float r;
    Bankdeposit bd1, bd2, bd3;

    bd3.show(); //Will throw a garbage value. But the program will run

    cout << "Enter Principal, Years, Rate of interest: " << endl;
    cin >> p >> y >> r;

    bd1 = Bankdeposit(p, y, r);
    bd1.show();

    cout << "Enter Principal, Years, Rate of interest: " << endl;
    cin >> p >> y >> R;

    bd1 = Bankdeposit(p, y, R);
    bd1.show();

    return 0;
}