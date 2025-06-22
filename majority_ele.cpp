#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> vec = {2, 7, 11, 15};
    vector<int> ans;
    int tarSum = 26;
    // for (int i = 0; i < vec.size(); i++)
    // {
    //     int currSum = 0;
    //     for (int j = i + 1; j < vec.size(); j++)
    //     {
    //         currSum = vec[i] + vec[j];
    //         if (currSum == tarSum)
    //         {
    //             ans.push_back(i);
    //             ans.push_back(j);
    //         }
    //     }
    // }

    int i = 0, j = vec.size() - 1;
    while (i < j)
    {
        int currSum=0;
        currSum = vec[i] + vec[j];
        if(currSum>tarSum)
            j--;
        else if (currSum<tarSum)
            i++;
        else
            {
                ans.push_back(i);
                ans.push_back(j);
                break;
            }    
    }

    cout << "Pair of indices: ";
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << "\t";
    }
    cout << endl;
    return 0;
}