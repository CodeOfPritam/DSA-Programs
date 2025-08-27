#include<iostream>
#include<vector>
using namespace std;

int trap(vector<int> &ht)
{
    int ans=0;
    int lmax=0,rmax=0;
    int f=0,l=ht.size()-1;
    while(f<l)
    {
        lmax=max(lmax,ht[f]);
        rmax=max(rmax,ht[l]);
        if(lmax<rmax)
        {
            ans+=lmax-ht[f];
            f++;
        }
        else
        {
            ans+=rmax-ht[l];
            l--;
        }
    }
    return ans;
}

int main()
{
    vector<int> height={0,1,0,2,1,0,1,3,2,1,2,1};
    cout<<trap(height)<<endl;
    return 0;
}