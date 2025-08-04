#include <iostream>
#include <vector>
using namespace std;

void mergeSortedArray(vector<int> &A, vector<int> &B, int m, int n)
{
    int idx = m + n - 1;
    int i = m - 1, j = n - 1;
    while (i >= 0 && j >= 0)
    {
        if(A[i]>=B[j])
        {
            A[idx] = A[i];
            idx--;
            i--;
        }
        else
        {
            A[idx] = B[j];
            idx--;
            j--;
        }
    }
    while (j >= 0)
    {
        A[idx] = B[j];
        idx--;
        j--;
    }
    for (int val : A)
    {
        cout << val << " ";
    }
    cout << endl;
}

int main()
{
    vector<int> nums1 = {1, 2, 3, 0, 0, 0};
    vector<int> nums2 = {2, 5, 6};
    cout<<"Sorted Array after merging:"<<endl;
    mergeSortedArray(nums1, nums2, 3, 3);
    return 0;
}