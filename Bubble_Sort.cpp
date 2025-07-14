#include<iostream>
using namespace std;

int main()
{
    int arr[]={9,5,2,15,16,36};
    int temp=0;
    for(int i=0;i<6-1;i++)
    {
        for(int j=0;j<6-1-i;j++)
        {
            if(arr[j]>arr[j+1])
            {
                swap(arr[j],arr[j+1]);
            }
        }
    }
    for(int i=0;i<6;i++)
    {
       cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}