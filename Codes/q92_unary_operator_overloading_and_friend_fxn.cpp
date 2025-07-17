#include<iostream>
using namespace std;

class Test{
    int i;
    friend void operator-(Test&);

    public:

    Test(int a){
        i = a;
    }

    void show(){
        cout<<i<<endl;
    }
};

void operator-(Test& t){
    t.i = -(t.i);
}

int main(){
    Test t1(11);
    t1.show();
    -t1;
    t1.show();

    return 0;
}