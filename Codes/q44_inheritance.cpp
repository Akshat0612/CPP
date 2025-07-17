#include <iostream>
using namespace std;

// Base Class
class Employee
{
public:
    int empId;
    float salary;

    Employee() {}

    Employee(int id)
    {
        empId = id;
        salary = 19.0;
    }
};

// Creating a 'Programmer' class derived from Base class 'Employee'
class Programmer : Employee // Default visibility mode is Private
{
public:
    int languagecode;

    Programmer(int id)
    {
        empId = id;
        languagecode = 9;
    }

    void getdata(){
        cout<<empId<<endl;
    }
};

int main()
{
    Employee e1(1), e2(2);
    cout << e1.salary << endl;
    cout << e2.salary << endl;

    Programmer skill(10);
    cout<<skill.languagecode<<endl;
    // cout<<skill.empId<<endl; // Can only access if Programmer is publically derived from Employee (not privately)
    skill.getdata();

    return 0;
}