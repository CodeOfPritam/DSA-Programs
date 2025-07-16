#include <iostream>
#include <vector>
using namespace std;

int main()
{
    // vector<int> vec;
    // vec.push_back(1);
    // vec.push_back(2);
    // vec.push_back(3);
    // vec.emplace_back();
    // vec.pop_back();
    // cout << vec.size() << endl;
    // cout << vec.capacity() << endl;
    // cout<<vec[2]<<endl;
    // cout<<vec.at(2)<<endl;

    // for (int val : vec)
    // {
    //     cout << val << " ";
    // }
    // cout<<endl;

    // cout<<"Element at front: "<<vec.front()<<endl;
    // cout<<"Element at back: "<<vec.back()<<endl;

    vector<int> vec = {1, 2, 3, 4, 5};
    // for (int val : vec)
    // {
    //     cout << val << " ";
    // }
    // cout << endl;

    // vector<int> a(5, 10);
    // for (int val : a)
    // {
    //     cout << val << " ";
    // }
    // cout << endl;

    // vector<int> vec2(vec);
    // for(int val:vec2)
    // {
    //     cout<<val<<" ";
    // } 
    // cout<<endl;

    // vec.erase(vec.begin()+1,vec.begin()+3);

    // vec.insert(vec.begin()+2,100);
    //  for (int val : vec)
    // {
    //     cout << val << " ";
    // }
    // cout << endl;

    // cout<<vec.capacity()<<endl;

    // // vec.clear();
    // cout<<"isEmpty? "<<vec.empty()<<endl;

    // cout<<*(vec.end())<<endl;

    // vector<int>::iterator it;
    for(auto it=vec.begin();it!=vec.end();it++)
    {
        cout<<*(it)<<endl;
    }

    for(auto it=vec.rbegin();it!=vec.rend();it++)
    {
        cout<<*(it)<<endl;
    }

    return 0;
}