#include<iostream>
#include<vector>
using namespace std;

int main()
{
    vector<int> price={7,4,1,6,5,2};
    int MP=0,BB=price[0];
    for(int i=1;i<price.size();i++)
    {
        if(price[i]>BB)
        {
            MP=max(MP,price[i]-BB);
        }
        BB=min(BB,price[i]);
    }
    cout<<"Maximum Profit is "<<MP<<endl;
    return 0;
}