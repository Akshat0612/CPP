#include <iostream>
using namespace std;

class Student
{
protected:
    int roll_number;

public:
    void set_roll_number(int);
    void get_roll_number(void);
};

void Student ::set_roll_number(int r)
{
    roll_number = r;
}

void Student ::get_roll_number(void)
{
    cout << "Roll number: " << roll_number << endl;
}

class Exams : public Student
{
protected:
    int maths;
    int physics;

public:
    void set_marks(int, int);
    void get_marks(void);
};

void Exams ::set_marks(int m1, int m2)
{
    maths = m1;
    physics = m2;
}

void Exams ::get_marks(void)
{
    cout << "Marks of Maths: " << maths << endl;
    cout << "Marks of Physics: " << physics << endl;
}

class Result : public Exams
{
public:
    void display_result()
    {
        get_roll_number();
        get_marks();
        cout << "Percentage: " << (float)(maths + physics) / 2 << "%" << endl;
    }
};

int main()
{
    Result s1;
    s1.set_roll_number(70);
    s1.set_marks(78, 91);
    s1.display_result();

    return 0;
}