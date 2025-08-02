#include<iostream>
using namespace std;

class Node
{
public: 

    int data;
    Node *next;

    Node(int val)
    {
        data=val;
        next=NULL;
    }
};

class List
{

    Node *head;
    Node *tail;

public:

    List()
    {
        head=tail=NULL;
    }

    void push_front(int val)
    {
        Node *newNode=new Node(val);
        if(head==NULL)
        {
            head=tail=newNode;
        }
        else
        {
            newNode->next=head;
            head=newNode;
        }
    }

    void push_back(int val)
    {
        Node *newNode=new Node(val);
        if(head==NULL)
        {
            head=tail=newNode;
        }
        else
        {
            tail=newNode;
            newNode->next=NULL;
        }
    }

    void pop_front()
    {
        if (head == NULL)
        {
            cout << "List is empty" << endl;
            return;
        }
        Node *temp = head;
        head = head->next;
        temp->next = NULL;

        delete temp;

        if (head == NULL)
        {
            tail = NULL; // also update tail if list becomes empty
        }
    }

    void print_List()
    {
        Node *temp;
        while(temp!=NULL)
        {
            cout<<temp->data<<"-->";
            temp=temp->next;
        }
        cout<<"NULL";
    }
};

int main()
{
    List l1;
    l1.push_front(1);
    l1.push_front(2);
    l1.push_front(3);
    l1.pop_front();
    l1.print_List();
    return 0;
}