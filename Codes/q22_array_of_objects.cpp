#include <iostream>
using namespace std;

class Employee
{
    int id;

public:
    void setId(void);
    void getId(void);
};

void Employee::setId(void)
{
    cout << "Enter Id: " << endl;
    cin >> id;
}

void Employee::getId(void)
{
    cout << "Employee Id: " << id << endl;
}

int main()
{
    int num;
    cout << "No of employees: " << endl;
    cin >> num;

    Employee fb[num];

    for (int i = 0; i < num; i++)
    {
        fb[i].setId();
        fb[i].getId();
    }

    return 0;
}