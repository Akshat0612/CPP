#include <iostream>
using namespace std;

class shop
{
    int itemId[100];
    int itemPrice[100];
    int counter = 0;

public:
    void setPrice(void);
    void displayPrice(void);
};

void shop ::setPrice(void)
{
    cout << "Enter item ID: " << endl;
    cin >> itemId[counter];
    cout << "Enter item price: " << endl;
    cin >> itemPrice[counter];
    counter++;
}

void shop::displayPrice(void)
{
    for (int i = 0; i < counter; i++)
    {
        cout << "The Price of Item ID " << itemId[i] << " is " << itemPrice[i] << endl;
    }
}

int main()
{
    shop a;
    a.setPrice();
    a.setPrice();
    a.setPrice();
    a.setPrice();
    a.setPrice();
    a.displayPrice();

    return 0;
}