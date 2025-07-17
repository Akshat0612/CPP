#include <iostream>
using namespace std;

class vector
{
public:
    int size;

    vector(int m){
        size = m;
    }
};

class vecInt : public vector{
    public:
    int *arr;

    vecInt(int m): vector(m){
        arr = new int[size];
    }

    int dotProduct(vecInt &v){
        int d=0;
        for(int i=0; i<size; i++){
            d += this->arr[i] * v.arr[i];
        }
        return d;
    }

    ~vecInt(){
        delete []arr;
    }
};

class vecFloat : public vector{
    public:
    float *arr;

    vecFloat(int m) : vector(m){
        arr = new float[size];
    }

    float dotProduct(vecFloat &v){
        float d=0;
        for(int i=0; i<size; i++){
            d += this->arr[i] * v.arr[i];
        }
        return d;
    }

    ~vecFloat(){
        delete []arr;
    }
};

int main(){
    vecInt v1(4);
    vecInt v2(4);

    v1.arr[0] = 4;
    v1.arr[1] = 1;
    v1.arr[2] = 2;
    v1.arr[3] = 10;

    v2.arr[0] = 2;
    v2.arr[1] = 8;
    v2.arr[2] = 7;
    v2.arr[3] = 3;

    int result = v1.dotProduct(v2);
    cout<<result<<endl;


    vecFloat v3(4);
    vecFloat v4(4);
    v3.arr[0] = 4.1;
    v3.arr[1] = 1.2;
    v3.arr[2] = 2.5;
    v3.arr[3] = 10.7;

    v4.arr[0] = 2.1;
    v4.arr[1] = 8.8;
    v4.arr[2] = 7.3;
    v4.arr[3] = 3.9;

    float resultf = v3.dotProduct(v4);
    cout<<resultf<<endl;

    return 0;
}