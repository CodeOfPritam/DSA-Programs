#include<iostream>
#include<queue>
using namespace std;

int main()
{
    priority_queue<int,vector<int>,greater<int>> q;
    q.push(5);
    q.push(2);
    q.push(10);
    q.push(7);

    while(!q.empty())
    {
        cout<<q.top()<<endl;
        q.pop();
    }

    cout<<q.empty()<<endl;
    return 0;
}