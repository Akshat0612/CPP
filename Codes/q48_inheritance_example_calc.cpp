#include <iostream>
#include <cmath>
using namespace std;

class SimpleCalc
{
protected:
    int num1, num2;
    int sum, subtract, multiply;
    float division;

public:
    void setdata(int, int);
    void operations(void);
    void simpleCalc_show(void);
};

void SimpleCalc ::setdata(int n1, int n2)
{
    num1 = n1;
    num2 = n2;
}

void SimpleCalc ::operations(void)
{
    sum = num1 + num2;
    subtract = num1 - num2;
    multiply = num1 * num2;
    division = (float)num1 / num2;
}

void SimpleCalc ::simpleCalc_show(void)
{
    cout << "Num1: " << num1 << endl;
    cout << "Num2: " << num2 << endl;
    cout << "Operations in Simple Calc:" << endl;
    cout << "Addition: " << sum << endl;
    cout << "Subtraction: " << subtract << endl;
    cout << "Multiplication: " << multiply << endl;
    cout << "Division: " << division << endl;
}

class ScientificCalc
{
protected:
    int a, b;

public:
    void setdata_scientific(int, int);
    void scientific_show(int);
};

void ScientificCalc ::setdata_scientific(int x, int y)
{
    a = x;
    b = y;
}

void ScientificCalc :: scientific_show(int val)
{
    cout<<"cos("<<val<<") : "<<cos(val)<<endl;
    cout<<"sin("<<val<<") : "<<sin(val)<<endl;
    cout<<"tan("<<val<<") : "<<tan(val)<<endl;
    cout<<"exp("<<val<<") (e^"<<val<<") : "<<exp(val)<<endl;
}

class HybridCalc : public SimpleCalc, public ScientificCalc
{};

int main()
{
    HybridCalc o1;
    o1.setdata(10,8);
    o1.operations();
    o1.simpleCalc_show();
    o1.setdata_scientific(45,60);
    o1.scientific_show(45);

    return 0;
}