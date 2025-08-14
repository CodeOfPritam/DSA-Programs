#include<iostream>
#include<vector>
using namespace std;

bool searchMatrix(vector<vector<int>> &mat, int target)
{
    int m=mat.size(),n=mat[0].size();
    int r=0,c=n-1;
    while(r<m && c>=0)
    {
        if(target==mat[r][c])
        {
            return true;
        }
        if(target>mat[r][c])
        {
            r++;
        }
        else
        {
            c--;
        }
    }
}

int main()
{
    vector<vector<int>> matrix={{1,4,7,11,15},{2,5,8,12,19},{3,6,9,16,22},{10,13,14,17,24},{18,21,23,26,30}};
    cout<<searchMatrix(matrix, 5)<<endl;
    return 0;
}