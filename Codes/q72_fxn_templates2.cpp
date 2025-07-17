#include <iostream>
using namespace std;

template <class T>
class temp
{
public:
    T data;

    temp(T a)
    {
        data = a;
    }

    void display();
};

template<class T>
void temp<T> :: display(){
    cout<<data<<endl;
}

int main(){
    temp<int> akshat(7);
    temp<float> akshat1(7.7);
    temp<char> akshat2('V');

    akshat.display();
    akshat1.display();
    akshat2.display();

    return 0;
}