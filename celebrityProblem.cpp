#include <iostream>
#include <vector>
#include <stack>
using namespace std;

int getCelebrity(vector<vector<int>> &arr)
{
    int n = arr.size();
    stack<int> s;

    // push all candidates
    for (int i = 0; i < n; i++)
    {
        s.push(i);
    }

    // eliminate until one left
    while (s.size() > 1)
    {
        int i = s.top(); s.pop();
        int j = s.top(); s.pop();

        if (arr[i][j] == 1)
        {
            // i knows j → i cannot be celebrity
            s.push(j);
        }
        else
        {
            // i does not know j → j cannot be celebrity
            s.push(i);
        }
    }

    int celeb = s.top();

    // validate celeb
    for (int i = 0; i < n; i++)
    {
        if (i != celeb && (arr[i][celeb] == 0 || arr[celeb][i] == 1))
        {
            return -1;
        }
    }
    return celeb;
}

int main()
{
    vector<vector<int>> arr = {{0,1,0}, {0,0,0}, {0,1,0}};
    int ans = getCelebrity(arr);

    if (ans != -1)
        cout << "Celebrity is : " << ans << endl;
    else
        cout << "No celebrity" << endl;

    return 0;
}
