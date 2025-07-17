#include <iostream>
#include <vector>
using namespace std;

template <class T>
void display(vector<T> &v)
{
    for (int i = 0; i < v.size(); i++)
    {
        // cout<<"Element "<<i+1<<": "<<v[i]<<endl;
        cout<<"Element "<<i+1<<": "<<v.at(i)<<endl;
    }
}
// NOTE: If vec3 is created before taking vec2 inputs, then it will print 0 values.
//       But, If it is created after taking inputs in vec2, then it will print values same as vec2.

int main()
{
    vector<int> vec1; //Zero length integer vector
    vector<int> vec2(4); // 4 length char vector
    // vector<int> vec3(vec2); // 4-element char vector from vec2
    vector<int> vec4(4,11); // 4-element char vector consisting of 11s
    vector<char> vec5 = {'A','B','C'};

    // display(vec1); // Empty
    // cout<<endl;

    // display(vec2); // 4-elements with no values (or 0 values)
    // vec2[0]=1;
    // vec2[1]=3;
    // vec2[2]=9;
    // vec2[3]=45;
    // display(vec2);
    // cout<<endl;

    // vector<int> vec3(vec2);
    // display(vec3);
    // cout<<endl;


    display(vec4);
    // cout<<endl;

    // display(vec5);

    return 0;
}