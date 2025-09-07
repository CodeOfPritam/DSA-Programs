#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

bool isPalindrome(string s)
{
    string s2=s;
    reverse(s2.begin(), s2.end());
    return s==s2;
}

void getAllParts(string s, vector<string> &parts, vector<vector<string>> &ans)
{
    if(s.size()==0)
    {
        ans.push_back(parts);
        return;
    }

    for(int i=0;i<s.size();i++)
    {
        string part=s.substr(0, i+1);
        if(isPalindrome(part))
        {
            parts.push_back(part);
            getAllParts(s.substr(i+1), parts, ans);
            parts.pop_back();
        }
    }
}

vector<vector<string>> partition(string s)
{
    vector<vector<string>> ans;
    vector<string> partitions;

    getAllParts(s, partitions, ans);
    return ans;
}

int main()
{
    string s="aab";
    vector<vector<string>> ans=partition(s);
    cout<<"All the palindromic partitions of the given string are :"<<endl;
    for(int i=0;i<ans.size();i++)
    {
        for(int j=0;j<ans[i].size();j++)  
        {
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}