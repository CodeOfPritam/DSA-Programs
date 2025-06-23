#include<iostream>
using namespace std;
#include<vector>

int main()
{
    vector<int> nums={1,1,2,2,1};
    int freq=0,ans=0;
    int n=nums.size();
    for(int i=0;i<n;i++)
    {
        if(freq==0)
            ans=nums[i];
        if(ans==nums[i])
            freq++;
        else
            freq--;        
    }
    #include<iostream>
using namespace std;
#include<vector>

int main()
{
    vector<int> nums={1,1,2,2,1};
    int freq=0,ans=0;
    int n=nums.size();
    for(int i=0;i<n;i++)
    {
        if(freq==0)
            ans=nums[i];
        if(ans==nums[i])
            freq++;
        else
            freq--;        
    }
    if (count > n / 2)
        cout << "Majority element is " << ans << endl;
    else
        cout << "No majority element exists." << endl;
    return 0;
}