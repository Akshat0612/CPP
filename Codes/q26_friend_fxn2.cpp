/*
Steps:
1. Make complex class
2. Make Calc class
3. Declare fxns of Calc class as friend fxns in complex class

Error 1: Since, Compiler reads the program from top to bottom,
         friend fxn declared in complex class will pose an error
         as the compiler doesnt know whether the Calc class will come to existence or not.
Correction: We will Forward declare Calc class

Error 2: Now, the compiler knows that there exists a class Calc
         But since, we are declaring only specific fxns of Calc class as friend fxns of complex class,
         it will throw an error
         bcoz the compiler knows that Calc class exists, but it has no idea about the fxns of Calc class
Correction: We will declare Calc class above complex class
            Therefore, We will forward declare complex class now

Error 3: Now, the compiler knows that there exists a complex class
         But, it has no idea about the members(variables) of complex class
         And we are using the variables of complex class in fxns of Calc class before declaring complex class details
Correction: We will only declare the fxns of Calc class, and will define them after the declaration of complex class.

NOTE: If we would made the entire Calc class as the friend of complex class, then there would have existed only Error 1.
      After correcting it, there wont be any error
      (See friend_class code)
*/

#include <iostream>
using namespace std;

class complex;

class Calc
{
public:
    int add(int a1, int b1)
    {
        return (a1 + b1);
    }

    int sumRealComplex(complex o1, complex o2);
    int sumCompComplex(complex, complex);
};

class complex
{
    int a, b;
    friend int Calc::sumRealComplex(complex o1, complex o2);
    friend int Calc::sumCompComplex(complex, complex);

public:
    void setnum(int n1, int n2);
    void getnum(void);
};

void complex::setnum(int n1, int n2)
{
    a = n1;
    b = n2;
}

void complex::getnum(void)
{
    cout << "Complex No: " << a << " + " << b << "i" << endl;
}

int Calc::sumRealComplex(complex o1, complex o2)
{
    return (o1.a + o2.a);
}

int Calc::sumCompComplex(complex o1, complex o2)
{
    return (o1.b + o2.b);
}

int main()
{
    complex c1, c2;
    c1.setnum(1, 2);
    c1.getnum();
    c2.setnum(5, 20);
    c2.getnum();

    Calc cal;
    int real_res = cal.sumRealComplex(c1, c2);
    int comp_res = cal.sumCompComplex(c1, c2);

    cout << "Sum of real parts of c1 & c2: " << real_res << endl;
    cout << "Sum of complex parts of c1 & c2: " << comp_res << endl;

    return 0;
}