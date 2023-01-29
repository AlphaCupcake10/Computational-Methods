#include<bits/stdc++.h>
using namespace std;
void PrintMatrix(vector<vector<float>>& matrix)
{
    for(int row = 0 ; row < matrix.size() ; row++)
    {
        for(int col = 0 ; col < matrix[0].size() ; col++)
        {
            cout<<matrix[row][col]<<"\t";
        }
        cout<<'\n';
    }
    cout<<'\n';
}
int main()
{
    vector<vector<float>> matrix =
    {
    {1,2,3,4},
    {2,3,4,1},
    {3,4,1,2},
    };
    //input le liya with augumented as extra col

    //lower triangular
    for(int diag = 0 ; diag < matrix.size() ; diag++)
    {
        for(int row = diag + 1 ; row < matrix.size() ; row++)
        {
            float ratio = matrix[row][diag] / matrix[diag][diag];
            for(int col = 0 ; col < matrix[0].size() ; col++)
            {
                matrix[row][col] -= ratio * matrix[diag][col];
            }
        }
    }
    //upper
    for(int diag = 0 ; diag < matrix.size() ; diag++)
    {
        for(int row = diag - 1 ; row >= 0 ; row--)
        {
            // cout<<matrix[row][diag]<<"\n";
            float ratio = matrix[row][diag] / matrix[diag][diag];
            for(int col = 0 ; col < matrix[0].size() ; col++)
            {
                matrix[row][col] -= ratio * matrix[diag][col];
            }
        }
    }
    PrintMatrix(matrix);
}