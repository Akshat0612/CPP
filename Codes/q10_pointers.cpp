#include<iostream>
using namespace std;
int main(){
    int i=8;
    int *j;
    j=&i; // j will now store the value of address of i
    cout << "Value of i = " << i << endl;
    cout << "Address of i = " << &i << endl;
    cout << "Address of j = " << &j << endl;
    cout << "Address stored in j (i.e., address of i) = " << j << endl;
    cout << "Value of i using *(&i) = " << *(&i) << endl;
    cout << "Value of i using *j = " << *j << endl;
    cout << "Value of j (i.e., value of i) = " << j << endl;
    cout << "Value at address of j (i.e., *(&j)) = " << *(&j) << endl;

    return 0;
}