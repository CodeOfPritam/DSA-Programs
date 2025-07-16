#include<iostream>
#include<stack>
using namespace std;

int main()
{
    stack<int> s;
    s.push(2);
    s.push(3);
    s.push(5);
    // cout<<"Top value: "<<s.top()<<endl;
    stack<int> s2;
    s2.swap(s);
    cout<<s.size()<<endl;
    cout<<s2.size()<<endl;
    while(!s2.empty())
    {
        cout<<s2.top()<<endl;
        s2.pop();
    }
    return 0;
}