#include <iostream>
#include <string>
using namespace std;

struct YTchannel
{
    string Name;
    int Subscribers_count;

    YTchannel(string name, int subs)
    {
        Name = name;
        Subscribers_count = subs;
    }
};

// GLOBAL OPERATOR FXN: Non-member operator fxn
void operator<<(ostream &COUT, YTchannel &ytchannel)
{
    COUT << "Name: " << ytchannel.Name << endl;
    COUT << "Subscribers: " << ytchannel.Subscribers_count << endl;
}

int main()
{
    YTchannel yt1("AkshaySamana", 5000000);
    YTchannel yt2 = YTchannel("AK_Goyal", 7000);

    // Will cause ERROR initially bcoz it doesnt know how to print Objects
    cout << yt1;

    cout << yt2;
    // OR
    // operator<<(cout, yt2);

    return 0;
}