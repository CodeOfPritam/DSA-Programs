#include <stdio.h>

void traversal(int arr[], int count)
{
    printf("Array elements found while array traversal:\n");
    for (int i = 0; i < count; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int insertion(int arr[], int count, int index, int insNum)
{
    if (count < 100 - 1)
    {
        for (int i = count; i > index; i--)
        {
            arr[i] = arr[i - 1];
        }
        arr[index] = insNum;
        return 1;
    }
    else
    {
        return 0;
    }
}

void deletion(int arr[], int count, int index)
{
    for (int i = index+1; i < count; i++)
    {
        arr[i - 1] = arr[i];
    }
    printf("New array after deletion:\n");
    count-=1;
    for (int i = 0; i < count; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main()
{
    int arr[100] = {10, 20, 30, 40, 50};
    int size=5;
    traversal(arr, size);
    if (insertion(arr, 5, 3, 22) == 1)
    {
        size+=1;
        printf("Insertion is successful!\n");
        printf("New array after insertion:\n");
        for (int i = 0; i < size; i++)
        {
            printf("%d ", arr[i]);
        }
        printf("\n");
    }
    else
    {
        printf("Insertion failed due to limited size of array!");
    }
    deletion(arr, size, 3);
    size-=1;
    return 0;
}