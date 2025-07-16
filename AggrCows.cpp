#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool isPossible(vector<int> &arr, int n, int c, int minAllowedDist)
{
    int cows = 1, lastStallPos = arr[0];
    for (int i = 1; i < n; i++)
    {
        if ((arr[i] - lastStallPos) >= minAllowedDist)
        {
            cows++;
            lastStallPos = arr[i];
            if (cows >= c) // We can place all cows
                return true;
        }
    }
    return false;
}

int getDistance(vector<int> &arr, int n, int c)
{
    sort(arr.begin(), arr.end()); // Sort once
    int st = 1;
    int end = arr[n - 1] - arr[0]; // Max possible distance
    int ans = -1;

    while (st <= end)
    {
        int mid = st + (end - st) / 2;
        if (isPossible(arr, n, c, mid))
        {
            ans = mid;
            st = mid + 1; // Try for larger distance
        }
        else
        {
            end = mid - 1; // Try smaller distance
        }
    }
    return ans;
}

int main()
{
    int N = 5, C = 3;
    vector<int> vec = {1, 2, 8, 4, 9};

    cout << "Maximum value of minimum distance is " << getDistance(vec, N, C) << endl; // Expected output: 3
    return 0;
}
