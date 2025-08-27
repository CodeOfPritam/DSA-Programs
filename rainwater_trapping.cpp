#include<iostream>
#include<vector>
using namespace std;

int trap(vector<int> &ht)
{
    int n = ht.size();
    if(n == 0) return 0;

    vector<int> lmax(n, 0);
    vector<int> rmax(n, 0);

    lmax[0] = ht[0];
    for(int i = 1; i < n; i++)
        lmax[i] = max(lmax[i-1], ht[i]);

    rmax[n-1] = ht[n-1];
    for(int i = n-2; i >= 0; i--)
        rmax[i] = max(rmax[i+1], ht[i]);

    int ans = 0;
    for(int i = 0; i < n; i++)
        ans += min(lmax[i], rmax[i]) - ht[i];

    return ans;
}

int main()
{
    vector<int> height = {4,2,0,3,2,5};
    cout << trap(height) << endl;
    return 0;
}
