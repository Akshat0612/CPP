#include <iostream>
#include <string>
using namespace std;

class binary
{
    string s;
    void check_bin(void);

public:
    void read(void);
    void ones_compliment(void);
    void display(void);
};

void binary ::read(void)
{
    cout << "Enter Binary number: " << endl;
    cin >> s;
    check_bin();
}

void binary ::check_bin(void)
{
    for (int i = 0; i < s.length(); i++)
    {
        if(s.at(i)!='0' && s.at(i)!='1'){
            cout<<"Incorrect Binary number"<<endl;
            exit(0);
        }
    }
}

void binary :: ones_compliment(void){
    for(int i=0;i<s.length();i++){
        if(s.at(i)=='0'){
            s.at(i)='1';
        }else{
            s.at(i)='0';
        }
    }
}

void binary::display(void){
    cout<<"Displaying number"<<endl;
    for(int i=0;i<s.length();i++){
        cout<<s.at(i);
    }
    cout<<endl;
}

int main(){
    binary x;
    x.read();
    x.display();
    x.ones_compliment();
    x.display();

    return 0;
}