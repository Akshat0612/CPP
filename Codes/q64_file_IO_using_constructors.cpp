#include<iostream>
#include<fstream>
using namespace std;

int main(){
    // Opening Files using constructor and Writing to it
    string st = "Akshat Goyal";
    ofstream out_Akshat("q64_sample.txt");
    out_Akshat<<st;
    // NOTE: If we run it multiple times, it will overwrite the sample file for every run

    // Opening File using constructor and Reading from it
    string st2;
    ifstream in_Akshat("q64_sample2.txt");
    // in_Akshat>>st2; //Will input only 1 word (no word after space or enter)
    getline(in_Akshat,st2); //Will input only 1 line
    getline(in_Akshat,st2); //Will input 2nd line (if both getline are run together)
    getline(in_Akshat,st2);
    getline(in_Akshat,st2);
    cout<<st2;

    return 0;
}