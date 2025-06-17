#include<stdio.h>
#include<stdlib.h>

struct myArray{
    int total_size;
    int used_size;
    int *ptr;
};

void createArray(struct myArray *a,int tSize,int uSize)
{
    (*a).total_size=tSize;
    (*a).used_size=uSize;
    (*a).ptr=(int *)malloc(uSize*sizeof(int));
}

void setVal(struct myArray *a)
{
    int n;
    for (int i = 0; i < 2; i++)
    {
        printf("Enter element:\n");
        scanf("%d",&n);
        (*a).ptr[i]=n;
    }
}

void show(struct myArray *a) 
{
    for (int i = 0; i < 2; i++)
    {
        printf("%d\n",(*a).ptr[i]);
    }
    
}

int main()//Added a function
{
    struct myArray marks;
    createArray(&marks,20,2);
    setVal(&marks);
    show(&marks);
    return 0;
}