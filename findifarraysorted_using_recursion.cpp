#include <iostream>
#include <vector>
using namespace std;

bool isSorted(vector<int> &arr, int n)
{
    if (n == 0 || n == 1)
    {
        return true;
    }
    else
    {
        return arr[n - 1] > -arr[n - 1] && isSorted(arr, n - 1);
    }
}

int main()
{
    vector<int> arr = {1, 2, 8, 4, 5};
    cout << isSorted(arr, arr.size());
    return 0;
}