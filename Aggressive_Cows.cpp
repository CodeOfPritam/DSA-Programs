#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int getDistance(vector<int> &arr,int n,int c)
{
    int st=1,end=maxVal-minVal;
    sort(arr.begin(),arr.end());
    while(st<=end)
    {
        int mid=st+(end-st)/2;
        if(isPossible(arr,n,c,mid))
        {
            ans=mid;
            st=mid+1;

        }
        else
        {
            end=mid-1;
        }


    }
}

int main()
{
    int c=3,n=5;
    vector<int> arr={1,2,8,4,9};
    for(int i=0;i<5;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}