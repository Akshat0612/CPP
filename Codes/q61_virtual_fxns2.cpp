#include <iostream>
#include <cstring>
using namespace std;

class CPP
{
protected:
    string title;
    float rating;

public:
    CPP(string s, float r)
    {
        title = s;
        rating = r;
    }

    // It is a Virtual fxn which is not compulsory to override
    virtual void display()
    {
        "Bogus Code\n";
    }
};

class CPPvideo : public CPP
{
    float videolength;

public:
    CPPvideo(string s, float r, float vl) : CPP(s, r)
    {
        videolength = vl;
    }
    void display()
    {
        cout << "This is an amazing video with title: " << title << endl;
        cout << "Ratings of this video tutorial: " << rating << endl;
        cout << "Video length of this tutorial: " << videolength << " minutes\n\n";
    }
};

class CPPtext : public CPP
{
    int words;

public:
    CPPtext(string s, float r, int w) : CPP(s, r)
    {
        words = w;
    }
    void display()
    {
        cout << "This is an amazing text tutorial with title: " << title << endl;
        cout << "Ratings of this video tutorial: " << rating << endl;
        cout << "No of words in this tutorial: " << words << " words\n\n";
    }
};

int main()
{
    string title_;
    float rating, video_length;
    int word_count;

    // For Video tutorial
    title_ = "CPP Video";
    rating = 4.81;
    video_length = 11.8;
    CPPvideo v1(title_, rating, video_length);
    // v1.display();

    // For Text tutorial
    title_ = "CPP Text";
    rating = 4.12;
    word_count = 590;
    CPPtext t1(title_, rating, word_count);
    // t1.display();

    CPP *tuts[2]; // 2 pointer of Base class created
    tuts[0] = &v1;
    tuts[1] = &t1;

    tuts[0]->display();
    tuts[1]->display();

    return 0;
}