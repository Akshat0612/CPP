#include <iostream>
using namespace std;

template <class T1 = int, class T2 = float, class T3 = char>
class Temp
{
    T1 a;
    T2 b;
    T3 c;

public:
    Temp(T1 x, T2 y, T3 z)
    {
        a = x;
        b = y;
        c = z;
    }
    void display(){
        cout<<"Value of a: "<<a<<endl;
        cout<<"Value of b: "<<b<<endl;
        cout<<"Value of c: "<<c<<endl;
    }
};

int main(){
    Temp<>t1(1,1.8,'V');
    t1.display();
    cout<<endl;

    Temp<float>t2(1.2,2.1,'S');
    t2.display();
    cout<<endl;

    Temp<float,int>t3(1.7,4,'A');
    t3.display();
    cout<<endl;

    Temp<float,char,int>t4(9.8,'D',99);
    t4.display();
    cout<<endl;

    return 0;
}