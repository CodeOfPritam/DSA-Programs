#include<iostream>
#include<map>

using namespace std;
int main()
{
    map<string,int> m;
    m["TV"]=50;
    m["Laptop"]=100;
    m["Headphones"]=150;
    m["Tablets"]=30;
    m["Watch"]=20;

    m.insert({"Camera",25});
    for(auto p:m)
    {
        cout<<p.first<<"-->"<<p.second<<endl;
    }

    cout<<"Count for laptop="<<m.count("Laptop")<<endl;
    cout<<"Count for laptop="<<m["Laptop"]<<endl;
    return 0;
}