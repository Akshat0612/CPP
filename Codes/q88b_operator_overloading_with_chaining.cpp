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

ostream& operator<<(ostream &COUT, YTchannel &ytchannel)
{
    COUT << "Name: " << ytchannel.Name << endl;
    COUT << "Subscribers: " << ytchannel.Subscribers_count << endl;
    return COUT;
    /* 
    USE-CASE:
    Firstly, cout<<yt1 will be called
    After printing, COUT (which is cout, bcoz of first arguments) is returned

    Therefore,
    cout<<yt1 will return cout
    --> cout<<yt2 will be called next;

    Hence, chaining is done smoothly
    */
}

int main()
{
    YTchannel yt1("AkshaySamana", 5000000);
    YTchannel yt2 = YTchannel("AK_Goyal", 7000);

    // Will cause ERROR initially bcoz it doesnt know how to print multiple objects
    cout << yt1 << yt2;

    return 0;
}