#include<iostream>
using namespace std;

template<class T, int n>
class Test{
    public:
    T var;

    Test(){
        var = n;
        cout<<var<<endl;
    }

    void divideby2(){
        T divide = var/2;
        cout<<divide<<endl;
    }
};

int main(){
    Test<int,9> t1;
    Test<float, 9> t2;

    t1.divideby2();
    t2.divideby2();

    return 0;
}