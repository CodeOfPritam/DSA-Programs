#include <stdio.h>

int getSecondLargest(int arr[], int n) {
    if (n < 2) return -1;

    int largest = arr[0];
    int second = -1;

    for (int i = 1; i < n; i++) {
        if (arr[i] > largest) {
            second = largest;
            largest = arr[i];
        } else if (arr[i] < largest && arr[i] > second) {
            second = arr[i];
        }
    }

    return second;
}

int main() {
    int arr[100], n = 10;
    printf("Enter %d elements in the array:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int result = getSecondLargest(arr, n);
    if (result == -1)
        printf("Second largest element doesn't exist.\n");
    else
        printf("Second largest element is: %d\n", result);

    return 0;
}
