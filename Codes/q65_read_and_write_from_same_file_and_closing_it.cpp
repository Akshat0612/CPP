#include<iostream>
#include<fstream>
using namespace std;

int main(){
    // Connecting our file with hout stream for writing to the file
    ofstream hout("q64_sample.txt");
    // Creating a name string and take user input in it
    string name;
    cout<<"Enter Name:"<<endl;
    // cin>>name; //Will store only 1 word
    getline(cin,name); // Will store the whole input string
    // Writing string name to the file
    hout<<"My Name is " + name;
    // Now, we have to Read the same file "q64_sample.txt":
    // In order to do so, we have to firstly close the output stream hout from the file
    hout.close();


    // Connecting our file with hoin stream for Reading from the file
    ifstream hin("q64_sample.txt");
    string st;
    // hin>>st; // Will store only 1 word
    getline(hin,st); // Will store the whole string
    cout<<"Output: "<<st<<endl;

    hin.close();

    cout<<endl;

    // NOTE: If we want to Write to a file which is not created, The file will automatically be created on running the program
    ofstream aout("q65_sample.txt");
    string n;
    cout<<"Enter Name:"<<endl;
    // cin>>n; //Will store only 1 word
    getline(cin,n); // Will store the whole input string
    // Writing string name to the file
    aout<<"My Name is " + n;
    
    aout.close();


    // NOTE: If we try to Read from a file which does not exist, then nothing will be read into the program and no new file will be created automatically
    ifstream ain("q65_sample2.txt");
    string s;
    // ain>>st; // Will store only 1 word
    getline(ain,s); // Will store the whole string
    cout<<"Output: "<<s;

    ain.close();

    return 0;
}