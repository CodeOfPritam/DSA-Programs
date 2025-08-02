#include<stdio.h>
#include<stdlib.h>

struct node{
    int val;
    struct node *next;
};

int main()
{
    struct node *first=(struct node *)malloc(sizeof(struct node));
    struct node *second=(struct node *)malloc(sizeof(struct node));
    struct node *third=(struct node *)malloc(sizeof(struct node));
    first->val=10;
    first->next=second->next;
    second->val=20;
    second->next=third->next;
    third->val=30;
    third->next=NULL;
    return 0;
}