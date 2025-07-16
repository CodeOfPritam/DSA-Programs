#include<iostream>
#include<vector>
using namespace std;

int main()
{
    vector<int> nums={0,1,2,3,4,5,6,7,8,9,10};
    int tar=9;
    int st=0,end=nums.size()-1,mid=0;
    while(st<=end)
    {
        mid=st+(end-st)/2;
        if(tar<nums[mid])
            end=mid-1;
        else if(tar>nums[mid])
            st=mid+1;
        else
            {
                cout<<"Target is found at position "<<mid<<endl;
                break;
            }        
    }
    return 0;
}