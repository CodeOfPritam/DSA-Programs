#include <bits/stdc++.h>
using namespace std;

vector<int> twoSum(vector<int> &nums, int target)
{
    unordered_map<int, int> m;
    vector<int> ans;

    for (int i = 0; i < nums.size(); i++)
    {
        int first = nums[i];
        int sec = target - first;

        if (m.find(sec) != m.end())
        {
            ans.push_back(i);
            ans.push_back(m[sec]);
            break;
        }

        m[first] = i;
    }

    return ans;
}

int main()
{
    vector<int> arr = {2, 7, 11, 15};
    int target=9;
    vector<int> ans=twoSum(arr, target);

    for(int val:ans)
    {
        cout<<val<<" ";
    }
    cout<<endl;

    return 0;
}