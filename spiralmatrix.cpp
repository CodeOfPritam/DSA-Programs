#include <iostream>
#include <vector>
using namespace std;

vector<int> spiralOrderedElements(vector<vector<int>> &mat) {
    vector<int> ans;
    int m = mat.size(), n = mat[0].size();
    int srow = 0, erow = m - 1, scol = 0, ecol = n - 1;

    while (srow <= erow && scol <= ecol) {
        // top
        for (int j = scol; j <= ecol; j++)
            ans.push_back(mat[srow][j]);

        // right
        for (int i = srow + 1; i <= erow; i++)
            ans.push_back(mat[i][ecol]);

        // bottom
        if (srow < erow) {
            for (int j = ecol - 1; j >= scol; j--)
                ans.push_back(mat[erow][j]);
        }

        // left
        if (scol < ecol) {
            for (int i = erow - 1; i > srow; i--)
                ans.push_back(mat[i][scol]);
        }

        srow++;
        erow--;
        scol++;
        ecol--;
    }

    return ans;
}

int main() {
    vector<vector<int>> matrix = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12},
        {13, 14, 15, 16}
    };
    vector<int> ans = spiralOrderedElements(matrix);
    for (int val : ans)
        cout << val << " ";
    cout << endl;
    return 0;
}
