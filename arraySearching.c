#include <stdio.h>

int linearSearch(int arr[], int size, int ele)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == ele)
            return i;
    }
    return -1;
}

int binarySearch(int arr[], int size, int ele)
{
    int low, mid, high;
    low = 0;
    high = size - 1;
    while (low <= mid)
    {
        mid = (low + high) / 2;
        if (arr[mid] < ele)
            low = mid + 1;
        if (arr[mid] > ele)
            high = mid - 1;
        if (arr[mid] == ele)
            return mid;
    }
    return -1;
}

int main()
{
    int arr[] = {2, 7, 9, 66, 100, 500, 675, 825};
    int size = sizeof(arr) / sizeof(int);
    int ele = 66;
    // printf("Element %d is found at position %d of the array", ele, linearSearch(arr, size, ele));
    printf("Element %d is found at position %d of the array", ele, binarySearch(arr, size, ele));
    return 0;
}