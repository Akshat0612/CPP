#include<iostream>
using namespace std;

class BaseClass{
    public:
        int var_base;

        void display(){
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
    // // CASE 1: base_class_pointer pointing to an object of Derived class obj_derived
    // BaseClass *base_class_pointer;
    // DerivedClass obj_derived;
    // base_class_pointer = &obj_derived;
    // /* 
    // Since, base_class_pointer is a pointer of BaseClass
    // and it pointing to obj_derived,
    // it can only access and manipulate the class members and member fxns of BaseClass (which are inherited in Derived class)
    //  */
    // base_class_pointer->var_base=39;
    // // base_class_pointer->var_derived=90; //ERROR: base_class_pointer cant access derived class members
    // base_class_pointer->display(); //Will bind display() fxn of BaseClass with this command


    // // CASE 2: derived_class_pointer pointing to an object of Derived class obj_derived
    // DerivedClass *derived_class_pointer;
    // DerivedClass obj_derived;
    // derived_class_pointer = &obj_derived;
    // /* 
    // Since, derived_class_pointer is a pointer of DerivedClass
    // and it is pointing to obj_derived,
    // it can access and manipulate the class members and member fxns of BaseClass (which are inherited in Derived class)
    // as well as DerivedClass
    // */
    // derived_class_pointer->var_base=99;
    // derived_class_pointer->var_derived=128;
    // derived_class_pointer->display(); //Will bind display() fxn of DerivedClass with this command


    // // CASE 3: derived_class_pointer pointing to an object of BaseClass obj_base
    // DerivedClass *derived_class_pointer;
    // BaseClass obj_base;
    // // derived_class_pointer = &obj_base; //ERROR: A pointer of Derived class type (derived_class_pointer) cant point to a base class type (obj_base)

    return 0;
}