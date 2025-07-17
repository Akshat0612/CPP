#include<iostream>
using namespace std;

class BaseClass{
    public:
        int var_base;

        virtual void display(){
            cout<<"The value of var_base: "<<var_base<<endl;
        }
};

class DerivedClass : public BaseClass{
    public:
        int var_derived;

        void display(){
            cout<<"The value of var_base: "<<var_base<<endl;
            cout<<"The value of derived_base: "<<var_derived<<endl;
        }
};

int main(){
    // CASE 1: base_class_pointer pointing to an object of Derived class obj_derived
    BaseClass *base_class_pointer;
    DerivedClass obj_derived;
    base_class_pointer = &obj_derived;
    /* 
    Since, base_class_pointer is a pointer of BaseClass
    and it pointing to obj_derived,
    it can only access and manipulate the class members and member fxns of BaseClass (which are inherited in Derived class)

    But, by using a virtual keyword with BaseClass display(),
    we will perform Run time polymorphism.
    This will allow us to access and manipulate display() of DerivedClass through base_class_pointer

    Run time polymorphism takes place in virtual fxns,
    bcoz even though we know which fxn will run,
    its binding takes place at run-time in case of Virtual functions.
    */

    base_class_pointer->var_base=39;
    // base_class_pointer->var_derived=90; //ERROR: Even if we are using virtual keyword, base_class_pointer still cant access derived class members
    base_class_pointer->display(); //Will bind display() fxn of BaseClass with this command

    return 0;
}