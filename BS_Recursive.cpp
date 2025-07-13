#include <iostream>
#include <vector>
using namespace std;

int BS(vector<int> &arr, int tar, int st, int end)
{
    if (st <= end)
    {
        int mid = st + (end - st) / 2;
        if (tar < arr[mid])
            return BS(arr, tar, st, mid - 1);
        else if (tar > arr[mid])
            return BS(arr, tar, mid + 1, end);
        else
            return mid;
    }
}
int main()
{
    vector<int> vec = {3, 7, 9, 12, 24, 25, 36};
    int tar = 25;
    cout << "The target value is found at index " << BS(vec, tar, 0, vec.size() - 1) << endl;
    return 0;
}