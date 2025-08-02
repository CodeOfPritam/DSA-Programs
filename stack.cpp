#include <iostream>
using namespace std;

class Stack
{
    int stack[100];  // Fixed size stack
    int top=-1;

public:

    void push(int val)
    {
        if (top >= 100-1)
        {
            cout << "Stack Overflow!" << endl;
            return;
        }
        stack[++top] = val;
    }

    int pop()
    {
        if (top < 0)
        {
            cout << "Stack Underflow!" << endl;
            return -1;
        }
        return stack[top--];
    }

    int peak()
    {
        if (top < 0)
        {
            cout << "Stack is empty!" << endl;
            return -1;
        }
        return stack[top];
    }

    bool isEmpty()
    {
        return top < 0;
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
