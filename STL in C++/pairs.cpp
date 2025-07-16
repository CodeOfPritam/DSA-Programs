#include <iostream>
#include <vector>
using namespace std;

int main()
{
    // pair<string,char>p={"Pritam",'F'};
    // cout<<p.first<<endl;
    // cout<<p.second<<endl;

    // pair<int,pair<int,char>>q={1,{5,'F'}};
    // cout<<q.first<<endl;
    // cout<<q.second.second<<endl;

    vector<pair<int, int>> vec = {{1, 2}, {3, 4}, {5, 6}};

    vec.push_back({99,100}); //insert
    vec.emplace_back(999,1000); //inplace create objects

    for(auto p:vec)
    {
        cout<<p.first<<" "<<p.second<<endl;

    }

    return 0;
}