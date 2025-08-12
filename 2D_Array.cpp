#include<iostream>
using namespace std;

bool linearSearch(int mat[][4], int rows, int columns, int key)
{
    for(int i=0;i<rows;i++)
    {
        for(int j=0;j<columns;j++)
        {
            if(mat[i][j]==key)
                return true;
        }
    }
    return false;
}

int main()
{
    int matrix[3][4]={{1,2,3,4},{5,6,7,8},{9,10,11,12}};
    int rows=3, columns=4;

    //int arr[5]={1,2,3,4,5};

    // //Input
    // for(int i=0;i<rows;i++)
    //     for(int j=0;j<columns;j++)
    //         cin>>matrix[i][j];

    // //Output
    // for(int i=0;i<rows;i++)
    // {
    //     for(int j=0;j<columns;j++)
    //     {
    //         cout<<matrix[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }

    cout<<linearSearch(matrix, rows, columns, 20)<<endl;
    return 0;
}