#include <iostream>
#include <string>
#include <list>
using namespace std;

struct YouTubeChannel
{
    string Name;
    int SubscribersCount;

    YouTubeChannel(string name, int subscribersCount)
    {
        Name = name;
        SubscribersCount = subscribersCount;
    }

    bool operator==(const YouTubeChannel yt) const{
        this->Name == yt.Name;
    }
};

struct MyCollection
{
    list<YouTubeChannel> MyChannels;

    // Member-function Operator overloading
    void operator+=(YouTubeChannel& ytchannel){
        this->MyChannels.push_back(ytchannel);
    }

    void operator-=(YouTubeChannel& ytchannel){
        this->MyChannels.remove(ytchannel);
    }
};

ostream &operator<<(ostream &COUT, YouTubeChannel &ytChannel)
{
    COUT << "Name: " << ytChannel.Name << endl;
    COUT << "Subscribers: " << ytChannel.SubscribersCount << endl;
    return COUT;
}

ostream&  operator<<(ostream& COUT, MyCollection& collection){
    for(YouTubeChannel yt : collection.MyChannels){
        COUT << yt <<endl;
    }
    return COUT;
}

int main()
{
    YouTubeChannel yt1 = YouTubeChannel("CodeBeauty", 75000);
    YouTubeChannel yt2 = YouTubeChannel("My second channel", 80000);
    MyCollection mycollection;

    mycollection += yt1;
    mycollection += yt2;
    mycollection -= yt2;

    cout << mycollection;

    return 0;
}