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
    int size = 3;
    Item *ptr = new Item[size];
    Item *ptrIndex = ptr;

    int p;
    float q;
    int i;
    for (i = 0; i < size; i++)
    {
        cout << "Enter Id and price for Item " << i + 1 << ":" << endl;
        cin >> p >> q;
        ptr->setdata(p, q);
        ptr++;
    }

    for (i = 0; i < size; i++)
    {
        cout<<"Item number: "<<i+1<<endl;
        ptrIndex->getdata();
        ptrIndex++;
    }

    return 0;
}