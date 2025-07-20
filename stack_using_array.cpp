#include <iostream>
using namespace std;

class Stack
{
    int arr[100];
    int top = 0;

public:
    void push(int val)
    {
        top++;
        arr[top] = val;
    }

    void pop()
    {
        top--;
    }

    int peak()
    {
        return arr[top];
    }

    bool isEmpty()
    {
        int size=sizeof(arr)/sizeof(int);
        return size==0;
    }
};

int main()
{
    Stack s;
    s.push(10);
    s.push(20);
    s.push(30);
    while (!s.isEmpty())
    {
        cout << s.peak() << " ";
        s.pop();
    }
    cout << endl;
    return 0;
}