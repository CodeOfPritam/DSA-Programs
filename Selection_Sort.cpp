#include <iostream>
using namespace std;

void selection_sortArray(int *arr) {
    int n = 6;  // Size of array (you can make this a parameter for more flexibility)

    for (int i = 0; i < n - 1; i++) {
        int minIndex = i;

        for (int j = i + 1; j < n; j++) {
            if (arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }

        // Swap the current element with the minimum found
        swap(arr[i], arr[minIndex]);
    }
}

int main() {
    int arr[] = {9, 15, 5, 7, 3, 1};

    selection_sortArray(arr);  // No need for '&'

    for (int i = 0; i < 6; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
