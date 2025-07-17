#include <iostream>
using namespace std;

class Student
{
protected:
    int roll_number;

public:
    void set_rollno(int r)
    {
        roll_number = r;
    }

    void get_rollno()
    {
        cout << "Roll number: " << roll_number << endl;
    }
};

class Test : virtual public Student
{
protected:
    float maths, physics;

public:
    void set_marks(float m1, float m2)
    {
        maths = m1;
        physics = m2;
    }
    void get_marks(void)
    {
        cout << "Your Result is here:\nMarks in Maths: " << maths << endl
             << "Marks in Physics: " << physics << endl;
    }
};

class Sports : virtual public Student
{
protected:
    int score;

public:
    void set_score(int sc)
    {
        score = sc;
    }
    void get_score()
    {
        cout << "Sports score: " << score << endl;
    }
};

class Result : public Test, public Sports{
    protected:
        float total;
    public:
        void display_result(){
            total=maths+physics+score;
            get_rollno();
            get_marks();
            get_score();
            cout<<"Total Score: "<<total<<endl;
        }
};

int main()
{
    Result Ak;
    Ak.set_rollno(18);
    Ak.set_marks(89.5,95);
    Ak.set_score(8);
    Ak.display_result();

    return 0;
}