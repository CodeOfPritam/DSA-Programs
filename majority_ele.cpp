#include<iostream>
#include<vector>
using namespace std;

int main()
{
    vector<int> nums={2,2,1,1,1};
    int value=-1;
    for(int val: nums)
    {
        int freq=0;
        for(int ele: nums)
        {
            if(val==ele)
            {
                freq++;
            }
        }
        if(freq>(nums.size()/2))
        {
            value=val;
            break;
        }
    }
    if(value!=-1)
    {
        cout<<"Majority element is "<<value<<endl;
    }
    else
    {
        cout<<"No majority element found!"<<endl;
    }
    return 0;
}