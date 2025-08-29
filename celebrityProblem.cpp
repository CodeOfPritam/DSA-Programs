#include <iostream>
#include <vector>
#include <stack>
using namespace std;

int getCelebrity(vector<vector<int>> &arr) {
    int n = arr.size();
    stack<int> s;

    for (int i = 0; i < n; i++) {
        s.push(i);
    }

    while (s.size() > 1) {
        int i = s.top(); s.pop();
        int j = s.top(); s.pop();

        if (arr[i][j] == 1) {
            // i knows j -> i can't be celeb
            s.push(j);
        } else {
            // i doesn't know j -> j can't be celeb
            s.push(i);
        }
    }

    int celeb = s.top();

    // validation
    for (int i = 0; i < n; i++) {
        if (i != celeb) {
            if (arr[i][celeb] == 0 || arr[celeb][i] == 1) {
                return -1;
            }
        }
    }

    return celeb;
}

int main() {
    vector<vector<int>> arr = {{0,1,0},{1,0,0},{0,1,0}};
    int ans = getCelebrity(arr);
    if(ans == -1) cout << "No Celebrity\n";
    else cout << "Celebrity is: " << ans << endl;
    return 0;
}
