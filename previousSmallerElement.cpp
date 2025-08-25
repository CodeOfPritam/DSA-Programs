#include <iostream>
#include <vector>
#include <stack>
using namespace std;

vector<int> prevSmallerElement(vector<int>& arr)
{
    int n = arr.size();
    vector<int> ans(n);
    stack<int> s;

    for (int i = 0; i < n; i++) {
        while (!s.empty() && s.top() >= arr[i]) {
            s.pop();
        }
        ans[i] = s.empty() ? -1 : s.top();
        s.push(arr[i]);
    }
    return ans;
}

int main()
{
    vector<int> arr = {3, 1, 0, 8, 6};
    vector<int> ans = prevSmallerElement(arr);
    for (int val : ans) {
        cout << val << " ";
    }
    cout << endl;
    return 0;
}
