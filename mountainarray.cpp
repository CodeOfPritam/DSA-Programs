#include <iostream>
#include<vector>
using namespace std;

int main()
{
    vector<int> arr = {0, 3, 8, 9, 5, 2};
    int mid = 0, st = 1, end = arr.size() - 2;
    while (st <= end)
    {
        mid = st + (end - st) / 2;
        if (arr[mid - 1] < arr[mid] && arr[mid + 1] < arr[mid])
        {
            cout << mid << endl;
            break;
        }
        if (arr[mid - 1] < arr[mid])
            st = mid + 1;
        else
            end = mid - 1;
    }
    return 0;
}