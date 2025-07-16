#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
    vector<int> arr={7,8,9,5,2};
    sort(arr.begin(),arr.end());
     for(int val:arr)
     {
        cout<<val<<" ";
     }
     cout<<endl;
     cout<<max(arr)<<endl;
    return 0;
}