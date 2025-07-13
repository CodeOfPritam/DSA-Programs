#include <iostream>
#include <vector>
using namespace std;

int sum(vector<int> &arr)
{
    int s = 0;
    for (int val : arr)
    {
        s += val;
    }
    return s;
}

int getMax(vector<int> &arr)
{
    int maxVal = arr[0];
    for (int i = 1; i < arr.size(); i++)
    {
        if (arr[i] > maxVal)
            maxVal = arr[i];
    }
    return maxVal;
}

bool isPossible(vector<int> &arr, int m, int n, int maxAllowedTime)
{
    int painters = 1, time = 0;
    for (int i = 0; i < n; i++)
    {
        if (time + arr[i] <= maxAllowedTime)
        {
            time += arr[i];
        }
        else
        {
            painters++;
            time = arr[i];
        }
    }
    return painters <= m ? true : false;
}

int minTimeToPaint(vector<int> &arr, int m, int n)
{
    int st = getMax(arr);          // replaced max_element
    int end = sum(arr), ans = -1;

    while (st <= end)
    {
        int mid = st + (end - st) / 2;
        if (isPossible(arr, m, n, mid))
        {
            ans = mid;
            end = mid - 1;
        }
        else
        {
            st = mid + 1;
        }
    }
    return ans;
}

int main()
{
    vector<int> arr = {40, 30, 10, 20};
    int n = 4, m = 2;

    cout << minTimeToPaint(arr, m, n) << endl;
    return 0;
}
