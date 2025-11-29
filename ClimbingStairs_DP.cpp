#include<bits/stdc++.h>
using namespace std;

int steps(int i, vector<int> &dp)
{
    if(i==0) return 1;
    if(i==1) return 1;

    if(dp[i]!=-1)
        return dp[i];
    int left=steps(i-1, dp);
    int right=steps(i-2, dp);
    return dp[i]=left+right;
}

int main()
{
    int n;
    cout<<"Enter the value of n:"<<endl;
    cin>>n;
    vector<int> dp(n+1, -1);
    cout<<steps(n, dp)<<endl;
    return 0;
}