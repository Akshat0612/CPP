#include <iostream>
#include <list>
using namespace std;

template <class T>
void display(list<T> &lst)
{
    typename list<T> :: iterator it;
    for (it = lst.begin(); it != lst.end(); it++)
    {
        cout<<*it<<" ";
    }
    cout<<endl;
}

int main()
{
    list<int> list1; // Empty list of 0 length
    display(list1);
    
    list1.push_back(1);
    list1.push_front(7);
    list1.push_back(45);
    list1.push_front(18);
    list1.push_front(10);
    list1.push_back(77);
    list1.push_back(19);
    display(list1);
    
    // list1.pop_back();
    // list1.pop_front();
    // display(list1);


    list<int> list2(4); //Empty list of 4 length
    // display(list2);
    list<int> :: iterator iti = list2.begin();
    
    *iti = 96;
    iti++;
    *iti = 98;
    iti++;
    *iti = 64;
    iti++;
    *iti = 73;
    iti++;
    display(list2);


    // REMOVE
    // list1.remove(19);
    // display(list1);

    // SORT
    list2.sort();
    display(list2);
    
    // REVERSE
    list2.reverse();
    display(list2);

    return 0;
}