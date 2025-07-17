#include <iostream>
using namespace std;

template <class u>
class vector
{
public:
    u *arr;
    int size;

    vector(int m)
    {
        size = m;
        arr = new u[size];
    }

    u dotProduct(vector &v)
    {
        u d = 0;
        for (int i = 0; i < size; i++)
        {
            d += this->arr[i] * v.arr[i];
        }
        return d;
    }
};

int main(){
    vector<float> v1(4);
    vector<float> v2(4);

    v1.arr[0] = 4.1;
    v1.arr[1] = 1.2;
    v1.arr[2] = 2.5;
    v1.arr[3] = 10.7;

    v2.arr[0] = 2.1;
    v2.arr[1] = 8.8;
    v2.arr[2] = 7.3;
    v2.arr[3] = 3.9;

    float result = v1.dotProduct(v2);
    cout<<result;

    return 0;
}