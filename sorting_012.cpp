#include<iostream>
#include<vector>
using namespace std;

int main()
{
    vector<int> nums={2,0,1,1,0,0,1,0,2,2};
    int low=0,mid=0,high=nums.size()-1;
    while(mid<=high)
    {
        if(nums[mid]==0)
        {
            swap(nums[low],nums[mid]);
            mid++;
            low++;
        }
        else if(nums[mid]==1)
        {
            mid++;
        }
        else
        {
            swap(nums[high],nums[mid]);
            high--;
        }
    }
    for(int i=0;i<nums.size();i++)
    {
        cout<<nums[i]<<" ";
    }
    cout<<endl;
    return 0;
}