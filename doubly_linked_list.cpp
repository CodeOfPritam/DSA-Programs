#include<iostream>
using namespace std;

class Node
{
public:    
    int data;
    Node *next;
    Node *prev;

    Node(int val)
    {
        data=val;
        next=prev=NULL;
    }
};

class DoublyList
{
    Node *head;
    Node *tail;

public:    
    DoublyList()
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
            head->prev=newNode;
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
            newNode->prev=tail;
            tail->next=newNode;
            tail=newNode;
        }
    }

    void display()
    {
        Node *temp=head;
        printf("NULL <==> ");
        while(temp!=NULL)
        {
            printf("%d <==> ",temp->data);
            temp=temp->next;
        }
        printf(" NULL\n");
    }

    void pop_front()
    {
        if(head==NULL)
        {
            delete head;
            head=tail=NULL;
            return;
        }
        Node *temp=head;
        head=head->next;
        head->prev=NULL;
        delete temp;
    }

    void pop_back()
    {
        if(head==NULL)
        {
            delete head;
            head=tail=NULL;
            return;
        }
        Node *temp=tail;
        tail=tail->prev;
        tail->next=NULL;
        delete temp;
    }
};

int main()
{
    DoublyList dll;
    dll.push_front(1);
    dll.push_front(2);
    dll.push_front(3);
    dll.push_back(4);
    dll.push_back(5);
    dll.pop_front();
    dll.pop_back();
    dll.display();
    return 0;
}