#include <iostream>
using namespace std;

class emp
{
    int id;

public:
    void start(void);
};

void emp::start(void)
{
    cout << "Program started" << endl;
}

int main()
{
    // emp::start(); //ERROR: Hence, Non-static fxns cant be called directly from class, without making an object
    return 0;
}