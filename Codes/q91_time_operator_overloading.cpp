#include <iostream>
using namespace std;

class Time
{
    int h, m, s;

public:
    Time() {}

    Time(int hr, int min, int sec)
    {
        h = hr;
        m = min;
        s = sec;
    }

    Time operator+(Time &time1)
    {
        Time t;

        int a, b;

        a = s + time1.s;
        t.s = a % 60;

        b = (a / 60) + m + time1.m;
        t.m = b % 60;

        t.h = h + time1.h + (b / 60);

        return t;
    }

    void show(){
        cout<<h<<":"<<m<<":"<<s<<endl;
    }
};

int main(){
    Time t1(8,30,54);
    Time t2(6,40,20);

    Time t3 = t1 + t2;
    t3.show();

    return 0;
}