#include<iostream>
#include<list>
using namespace std;

int main()
{
    list<int> l;
    l.push_back(4);
    l.push_back(5);
    l.push_front(3);
    l.push_front(2);

    l.pop_front();
    l.pop_back();

    for(int val:l)
    {
        cout<<val<<" ";
    }
    cout<<endl;
    return 0;
} 