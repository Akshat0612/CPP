#include<iostream>
using namespace std;

void divide(int x, int y){
    cout<<"Inside function\n";
    if(y==0) throw y;
    else cout<<x<<" divided by "<<y<<": "<<(float)x/y<<endl;
}

int main(){
    try{
        cout<<"Inside try\n";
        divide(20,12);
        divide(20,0);
        divide(30,13);
    }
    catch(int a){
        cout<<"Division by zero\n";
    }
    
    return 0;
}