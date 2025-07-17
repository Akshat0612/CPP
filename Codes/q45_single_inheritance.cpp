#include <iostream>
using namespace std;

class Base
{
    int data1;

public:
    int data2;
    void setdata(int, int);
    int getdata1(void);
};

void Base ::setdata(int x, int y)
{
    data1 = x;
    data2 = y;
}

int Base ::getdata1(void)
{
    return data1;
}

class Derived : public Base
{
    int data3;

public:
    void setdata3(void);
    void display(void);
};

void Derived ::setdata3(void)
{
    data3 = data2 * getdata1();
}

void Derived :: display(void)
{
    cout<<"Data 1: "<<getdata1()<<endl;
    cout<<"Data 2: "<<data2<<endl;
    cout<<"Data 3: "<<data3<<endl;
}

int main()
{
    Derived der;
    der.setdata(10,20);
    der.setdata3();
    der.display();

    return 0;
}