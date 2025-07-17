#include <iostream>
using namespace std;

class Item
{
    int Id;
    float price;

public:
    void setdata(int a, float b)
    {
        Id = a;
        price = b;
    }
    void getdata()
    {
        cout << "Code of this item: " << Id << endl;
        cout << "Price of this item: " << price << endl;
    }
};

int main()
{
    int size = 4;
    Item *ptr = new Item[size];

    int p;
    float q;
    int i;
    for (i = 0; i < size; i++)
    {
        cout << "Enter Id and price for Item " << i + 1 << ":" << endl;
        cin >> p >> q;
        ptr[i].setdata(p, q);
    }

    for (i = 0; i < size; i++)
    {
        cout<<"Item number: "<<i+1<<endl;
        ptr[i].getdata();
    }

    return 0;
}