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
            Node* newNode=new Node(val); // dynamic object for permanent memory allocation
            // Node newNode(val); // static object for temporary allocation
            if(head==NULL)
            {
                head=tail=newNode;
                return;
            }
            else
            {
                newNode->next=head; // (*a).val ==> a->val
            }
        }

        void print_Linkedlist()
        {
            Node *temp=head;
            while(temp!=NULL)
            {
                cout<<temp->data<<"->";
                temp=temp->next;
            }
            cout<<"NULL"<<endl;
        }
};

int main()
{
    List l1;
    l1.push_front(10);
    l1.push_front(20);
    l1.push_front(30);
    l1.push_front(40);
    l1.print_Linkedlist();

    return 0;
}