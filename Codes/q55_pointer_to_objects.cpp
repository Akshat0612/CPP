#include<iostream>
using namespace std;

class Complex{
    int real,imaginary;

    public:
        void setdata(int a, int b){
            real=a;
            imaginary=b;
        }
        void getdata(){
            cout<<"Real part: "<<real<<endl;
            cout<<"Imaginary part: "<<imaginary<<endl;
        }
};

int main(){
    Complex c1;
    Complex *ptr = &c1;
    (*ptr).setdata(2,15);
    ptr->getdata();

    Complex *ptr1 = new Complex;
    (*ptr1).setdata(4,20);
    ptr1->getdata();

    // Array of objects
    Complex *ptr2 = new Complex[4];
    (*ptr2).setdata(10,7);
    (*(ptr2+1)).setdata(20,19);
    ptr2[2].setdata(18,15);
    (ptr2+3)->setdata(14,17);

    ptr2->getdata();
    (ptr2+1)->getdata();
    ptr2[2].getdata();
    (*(ptr2+3)).getdata();

    
    return 0;
}