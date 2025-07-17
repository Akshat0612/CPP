#include <iostream>
using namespace std;

class vector
{
public:
    int *arr;
    int size;

    vector(int m)
    {
        size = m;
        arr = new int[size];
    }

    int dotProduct(vector &v)
    {
        int d = 0;
        for (int i = 0; i < size; i++)
        {
            d += this->arr[i] * v.arr[i];
        }
        return d;
    }
};

int main(){
    vector v1(4);
    vector v2(4);

    v1.arr[0] = 4;
    v1.arr[1] = 1;
    v1.arr[2] = 2;
    v1.arr[3] = 10;

    v2.arr[0] = 2;
    v2.arr[1] = 8;
    v2.arr[2] = 7;
    v2.arr[3] = 3;

    int result = v1.dotProduct(v2);
    cout<<result;

    return 0;
}