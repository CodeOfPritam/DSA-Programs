#include <iostream>
#include <vector>
#include <stack>
using namespace std;

vector<int> nextGreaterElement(vector<int> &arr)
{
    int n = arr.size();
    stack<int> s;
    vector<int> ans(n, 0);
    for (int i = n - 1; i >= 0; i--)
    {
        while (!s.empty() && s.top() <= arr[i])
        {
            s.pop();
        }
        ans[i] = s.empty() ? -1 : s.top();
        s.push(arr[i]);
    }
    return ans;
}

int main()
{
    vector<int> arr = {3, 1, 8, 5, 2};
    vector<int> ans = nextGreaterElement(arr);
    for (int val : ans)
    {
        cout << val << " ";
    }
    cout << endl;
    return 0;
}