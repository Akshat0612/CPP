#include<iostream>
using namespace std;

void func(int a){
    cout<<"This is first func() "<<a<<endl;
}

template<class T>
void func(T a){
    cout<<"This is templatised func() "<<a<<endl;
}

int main(){
    func(1);
    // Which fxn will be called?
    // NOTE: Exact match takes Higher priority than Templatised match
    //       Therefore, func() first will be printed

    func(2.0);

    return 0;
}