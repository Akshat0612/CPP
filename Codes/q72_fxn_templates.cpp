#include<iostream>
using namespace std;

template<class T1, class T2>
float Average(T1 a, T2 b){
    float ave = (a+b)/2.0;
    return ave;
}

int main(){
    float result, result2;
    result = Average<int,int>(5,6);
    printf("Average: %.2f\n",result);

    result2 = Average(5.5,6);
    printf("Average: %.2f\n",result2);

    return 0;
}