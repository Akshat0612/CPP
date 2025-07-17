#include<iostream>
using namespace std;

class Celcius{
    float temper;

    public:

    Celcius(float temp){
        temper = temp;
    }

    operator float(){
        float fer = temper*9/5 + 32;
        return fer;
    }
};

int main(){
    Celcius cel(37);
    
    float feri = cel;

    cout<<feri<<endl;

    return 0;
}