#include <iostream>
using namespace std;

class Employee
{
    int id;
    static int counter;

public:
    void setId(void);
    void displayId(void);
    static void getcount(void);
};

int Employee::counter;

void Employee ::setId(void)
{
    cout << "Enter Id: " << endl;
    cin >> id;
    counter++;
}

void Employee ::displayId(void)
{
    cout << "ID: " << id << " and Employee No: " << counter << endl;
}

void Employee ::getcount(void)
{
    // cout<<id; ERROR: Static fxns can't access non-static variables
    cout<<"Value of counter: "<<counter<<endl;
}

int main()
{
    Employee a, b, c;

    a.setId();
    a.displayId();
    Employee :: getcount();

    b.setId();
    b.displayId();
    Employee :: getcount();

    c.setId();
    c.displayId();
    Employee :: getcount();

    return 0;
}