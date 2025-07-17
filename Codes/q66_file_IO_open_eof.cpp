#include <iostream>
#include <fstream>
#include <string>
using namespace std;

// FILE I/O using open() and close():
// Use case of eof() [end of file fxn]

int main()
{
    ofstream out_akshat;
    out_akshat.open("q66_sample.txt"); // New file created
    string college;
    cout<<"Enter College: \n";
    getline(cin,college);
    out_akshat<<college;
    out_akshat.close();

    // Now, we will read the entire file using eof fxn.
    ifstream in_akshat;
    in_akshat.open("q64_sample2.txt");
    string s;

    // Will input 1-1 word
    // string s1,s2;
    // in_akshat>>s1>>s2;
    // cout<<s1<<s2;

    // Will input whole file
    while (in_akshat.eof() == 0)
    {
        // in_akshat >> s; // Will print word-by-word
        getline(in_akshat,s); // Will print line-by-line
        cout << s << endl;
    }
    in_akshat.close();

    return 0;
}