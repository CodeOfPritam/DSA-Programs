#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s="abcabcbb";
    unordered_map<char, int> freq;
    int l=0, r=0, maxlen=0;
    while(r<s.length())
    {
        if(freq.find(s[r])!=freq.end())
        {
            if(freq[s[r]]>=l)
            {
                l=freq[s[r]]+1;
            }
        }
        int len=r-l+1;
        maxlen=max(len, maxlen);
        freq[s[r]]=r;
        r++;
    }
    cout<<"Length of longest substring without repeating characters: "<<maxlen<<endl;
    return 0;
}