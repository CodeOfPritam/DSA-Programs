#include <iostream>
#include <vector>

using namespace std;
int main()
{
    // // vector<int> vec={1,2,3}; //0
    // // vector<int> vec(5, 0);

    // vector<char> vec = {
    //     'a', 'e', 'i', 'o', 'u'};

    // cout << "size =" << vec.size() << endl;

    // vec.push_back('z');

    // cout << "After push back size =" << vec.size() << endl;

    // vec.pop_back();
    // cout << "size =" << vec.size() << endl;

    // // cout << vec[0] << endl;
    // // cout << vec[1] << endl;
    // // cout << vec[2] << endl;
    // // cout << vec[3] << endl;
    // // cout << vec[4] << endl;

    // for (char val : vec)
    // {
    //     cout << val << endl;
    // }

    // cout << "Element position 2 =" << vec.at(2) << endl;

    vector<int> vec;

    vec.push_back(0);
    vec.push_back(1);
    vec.push_back(2);
    vec.push_back(3);
    vec.push_back(4);

    cout<<"Size ="<<vec.size()<<endl;
    cout<<"Capacity ="<<vec.capacity()<<endl;
    return 0;

}