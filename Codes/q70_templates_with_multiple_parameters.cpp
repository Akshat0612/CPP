#include<iostream>
using namespace std;

template<class T1, class T2>
class Base{
    T1 data1;
    T2 data2;

    public:
        Base(T1 a, T2 b){
            data1 = a;
            data2 = b;
        }
        void display(){
            cout<<data1<<endl<<data2<<endl;
        }
};

int main(){
    Base<int,float> b1(1,1.8);
    Base<int, char> b2(10,'B');
    Base<char,float> b3('A',24.7);

    b1.display();
    b2.display();
    b3.display();

    return 0;
}