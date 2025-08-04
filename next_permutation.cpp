#include <iostream>
#include<vector>
using namespace std;

void reverseArray(vector<int> &A, int i, int j)
{
    while (i < j)
    {
        swap(A[i], A[j]);
        i++;
        j--;
    }
}

void nextPermutation(vector<int> &A)
{
    int pivot = -1, n = A.size();
    for (int i = n - 2; i >= 0; i--)
    {
        if (A[i] < A[i + 1])
        {
            pivot = i;
            break;
        }
    }
    if (pivot == -1)
    {
        reverseArray(A, 0, n - 1);
        return;
    }
    for (int i = n - 1; i > pivot; i--)
    {
        if (A[i] > A[pivot])
        {
            swap(A[i], A[pivot]);
            break;
        }
    }
    reverseArray(A, pivot + 1, n - 1);
}

int main()
{
    vector<int> nums = {1, 2, 3, 6, 5, 4};
    nextPermutation(nums);
    cout << "Next Permutation of the array is:" << endl;
    for (int val : nums)
    {
        cout << val << " ";
    }
    cout << endl;
    return 0;
}