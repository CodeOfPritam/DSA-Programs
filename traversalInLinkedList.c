#include<stdio.h>
#include<stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

void linkedListTraversal(struct Node *ptr)
{
    while(ptr!=NULL)
    {
        printf("Element:%d\n",ptr->data);
        ptr=ptr->next;
    }
}

int main(){
    struct Node *head;
    struct Node *second;
    struct Node *third;

    head=(struct Node *)malloc(sizeof(int));
    second=(struct Node *)malloc(sizeof(int));
    third=(struct Node *)malloc(sizeof(int));

    head->data=7;
    head->next=second;

    second->data=10;
    second->next=third;

    third->data=15;
    third->next=NULL;
    
    linkedListTraversal(head);
    return 0;
}