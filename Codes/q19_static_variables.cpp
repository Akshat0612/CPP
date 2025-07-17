#include <iostream>
using namespace std;

class Employee
{
    int id;
    // int counter=0; //Without static counter
    // By Default, static variable is initialised from 0
    static int counter; // With static counter

    // static int counter=0;
    // static int counter=1000; SYNTACTICALLY WRONG

public:
    void setId(void)
    {
        cout << "Enter Id: " << endl;
        cin >> id;
        counter++;
    }
    void displayId(void)
    {
        cout << "ID: " << id << " and Employee No: " << counter << endl;
    }
};

int Employee::counter = 1000; // Static var counter will now be initialised from 10

int main()
{
    Employee a, b, c;
    a.setId();
    a.displayId();
    b.setId();
    b.displayId();
    c.setId();
    c.displayId();

    return 0;
}