#include <iostream>
#include <vector>
using namespace std;

void combSum(vector<int> &arr, int idx, vector<int> &combin, vector<vector<int>> &ans, int target)
{
    if (idx == arr.size() || target < 0)
    {
        return;
    }

    if (target == 0)
    {
        ans.push_back(combin);
        return;
    }

    // Include current element (stay at idx for multiple inclusion)
    combin.push_back(arr[idx]);
    combSum(arr, idx, combin, ans, target - arr[idx]);
    combin.pop_back();

    // Exclude current element (move to next index)
    combSum(arr, idx + 1, combin, ans, target);
}

vector<vector<int>> combinationSum(vector<int> arr, int target)
{
    vector<vector<int>> ans;
    vector<int> combin;
    combSum(arr, 0, combin, ans, target);
    return ans;
}

int main()
{
    vector<int> arr = {2, 3, 5};
    int target = 8;
    vector<vector<int>> ans = combinationSum(arr, target);
    for (int i = 0; i < ans.size(); i++)
    {
        for (int j = 0; j < ans[i].size(); j++)
        {
            cout << ans[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}
