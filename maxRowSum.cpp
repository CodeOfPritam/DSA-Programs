#include<iostream>
using namespace std;

int getMaxSum(int mat[][3], int rows, int cols)
{
    int maxRowSum=INT16_MIN;
    for(int i=0;i<rows;i++)
    {
        int rowSum=0;
        for(int j=0;j<cols;j++)
        {
            rowSum+=mat[i][j];
        }
        maxRowSum=max(rowSum, maxRowSum);
    }
    return maxRowSum;
}

int main()
{
    int matrix[3][3]={{1,2,3},{4,5,6},{7,8,9}};
    int rows=3;
    int cols=4;

    cout<<"Maximum row sum is "<<getMaxSum(matrix, rows, cols)<<endl;

    return 0;
}