#include<iostream>
#include<vector>
using namespace std;

int main()
{
    vector<int> nums={1,2,3,4};
    vector<int> prodnums={1,1,1,1};
    for(int i=0;i<nums.size();i++)
    {
        for(int j=0;j<nums.size();j++)
        {
            if(i==j)
                continue;
            else    
                prodnums[i]*=nums[j];
        }
    }
    cout<<"Product of array except itself is:"<<endl;
    for(int i=0;i<prodnums.size();i++)
    {
        cout<<prodnums[i]<<"\t";
    }
    cout<<endl;
    return 0;
}