#include <stdio.h>
#define max 5

int st[max], top = -1;

void push(int st[], int val)
{
    if (top == max - 1)
    {
        printf("Stack overflow\n");
        return;
    }
    top++;
    st[top] = val;
    printf("Element pushed into stack\n");
}

int pop(int st[])
{
    int val = -1;
    if (top == -1)
    {
        printf("Stack underflow\n");
        return val;
    }
    val = st[top];
    top--;
    return val;
}

void display(int st[])
{
    for (int idx = 0; idx <= top; idx++)
    {
        printf("%d\t", st[idx]);
    }
    printf("\n");
}

int peek(int st[])
{
    if (top == -1)
    {
        printf("Stack underflow\n");
        return -1;
    }
    return st[top];
}

int main()
{
    int option, val;
    do
    {
        printf("***Main Menu***\n");
        printf("1. PUSH\n");
        printf("2. POP\n");
        printf("3. DISPLAY\n");
        printf("4. PEEK\n");
        printf("5. EXIT\n");
        printf("Enter your option:\n");
        scanf("%d", &option);
        switch (option)
        {
        case 1:
            printf("Enter the value to be pushed: ");
            scanf("%d", &val);
            push(st, val);
            break;

        case 2:
            val = pop(st);
            if (val != -1)
                printf("Element popped from stack is %d\n", val);
            break;

        case 3:
            printf("The stack elements are:\n");
            display(st);
            break;

        case 4:
            val = peek(st);
            if (val != -1)
                printf("Element at the peek of stack is %d\n", peek(st));
            break;
        }

    } while (option != 5);

    printf("Program terminated!\n");
    return 0;
}