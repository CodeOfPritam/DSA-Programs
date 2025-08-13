#include<stdio.h>
#include<stdlib.h>

typedef struct Node
{
    int data;
    struct Node *next;
} node;

node *start = NULL;

node *createList(node *start)
{
    node *newNode, *ptr;
    int num;
    printf("Enter -1 to end\n");
    printf("Enter the data:\n");
    scanf("%d", &num);
    while (num != -1)
    {
        newNode = (node *)malloc(sizeof(node));
        newNode->data = num;
        newNode->next = NULL;

        if (start == NULL)
        {
            start = newNode;
        }
        else
        {
            ptr = start;
            while (ptr->next != NULL)
            {
                ptr = ptr->next;
            }
            ptr->next = newNode;
        }
        printf("Enter the data:\n");
        scanf("%d", &num);
    }
    return start;
}

node *display(node *start)
{
    node *ptr = start;
    if (ptr == NULL)
    {
        printf("List is empty\n");
        return start;
    }
    while (ptr != NULL)
    {
        printf("%d-->", ptr->data);
        ptr = ptr->next;
    }
    printf("NULL\n");
    return start;
}

node *insertAtFirst(node *start)
{
    int num;
    printf("Enter the data to be added:\n");
    scanf("%d", &num);
    node *newNode = (node *)malloc(sizeof(node));
    newNode->data = num;
    newNode->next = start;
    start = newNode;
    return start;
}

node *insertAtLast(node *start)
{
    int num;
    printf("Enter the data to be added:\n");
    scanf("%d", &num);
    node *newNode = (node *)malloc(sizeof(node));
    newNode->data = num;
    newNode->next = NULL;

    if (start == NULL)
    {
        start = newNode;
    }
    else
    {
        node *ptr = start;
        while (ptr->next != NULL)
        {
            ptr = ptr->next;
        }
        ptr->next = newNode;
    }
    return start;
}

node *deleteFirst(node *start)
{
    if (start == NULL)
    {
        printf("List is empty, nothing to delete\n");
        return start;
    }
    node *temp = start;
    start = start->next;
    free(temp);
    return start;
}

node *deleteLast(node *start)
{
    if (start == NULL)
    {
        printf("List is empty, nothing to delete\n");
        return start;
    }
    if (start->next == NULL)
    {
        free(start);
        return NULL;
    }
    node *temp = start;
    node *ptr = NULL;
    while (temp->next != NULL)
    {
        ptr = temp;
        temp = temp->next;
    }
    ptr->next = NULL;
    free(temp);
    return start;
}

int main()
{
    int option;
    do
    {
        printf("\n***Main Menu***\n");
        printf("1. Create List\n");
        printf("2. Insert at First\n");
        printf("3. Insert at Last\n");
        printf("4. Delete First\n");
        printf("5. Delete Last\n");
        printf("6. Display List\n");
        printf("7. Exit\n");
        printf("Enter your option:\n");
        scanf("%d", &option);

        switch (option)
        {
            case 1:
                start = createList(start);
                printf("Linked list created\n");
                break;

            case 2:
                start = insertAtFirst(start);
                printf("Node inserted at first\n");
                break;

            case 3:
                start = insertAtLast(start);
                printf("Node inserted at last\n");
                break;

            case 4:
                start = deleteFirst(start);
                printf("First node deleted\n");
                break;

            case 5:
                start = deleteLast(start);
                printf("Last node deleted\n");
                break;

            case 6:
                start = display(start);
                break;

            case 7:
                printf("Program terminated!\n");
                break;

            default:
                printf("Invalid option! Please try again.\n");
        }
    } while (option != 7);

    return 0;
}