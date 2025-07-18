#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> nums = {3, 4, 5, 6, 7, 0, 1, 2};
    int st = 0, end = nums.size() - 1, mid = 0, tar = 5;
    while (st <= end)
    {
        mid = st + (end - st) / 2;
        if (nums[mid] == tar)
        {
            cout << "Target is found at position " << mid << endl;
            break;
        }
        if (nums[st] <= nums[mid]) // Left Sorted
        {
            if (nums[st] <= tar && tar <= nums[mid])
                end = mid - 1;
            else
                st = mid + 1;
        }
        else
        {
            if (nums[mid] <= tar && tar <= nums[end]) // Right Sorted
                st = mid + 1;
            else
                end = mid - 1;
        }
    }
    return 0;
}