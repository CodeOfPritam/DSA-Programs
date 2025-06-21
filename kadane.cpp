#include <iostream>
using namespace std;
//Brute Force Approach -> O(n^2)
int main()
{
    int n = 5;
    int currSum;
    int maxSum = INT8_MIN;
    int arr[5] = {1, 2, 3, 4, 5};
    for (int st = 0; st < n; st++)
    {
        currSum = 0;
        for (int end = st; end < n; end++)
        {
            currSum += arr[end];
        }
        maxSum=max(maxSum,currSum);
    }
    cout << "Maximum subarray sum: " << maxSum << endl;
    return 0;
}
