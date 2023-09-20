/*
Row With Maximum Ones

Given a m x n binary matrix mat, find the 0-indexed position of the row that contains the maximum count of ones, and the number of ones in that row.
In case there are multiple rows that have the maximum count of ones, the row with the smallest row number should be selected.
Return an array containing the index of the row, and the number of ones in it.


*/

#include <iostream>
#include <vector>

using namespace std;

vector<int> rowAndMaximumOnes(vector<vector<int>> &mat)
{
    vector<int> res(2);
    int index = 0;
    int countOnes = 0;
    for (int i = 0; i < mat.size(); i++)
    {
        int count = 0;
        for (int j = 0; j < mat[i].size(); j++)
        {
            if (mat[i][j] == 1)
            {
                count++;
            }
        }
        if (count > countOnes)
        {
            countOnes = count;
            index = i;
        }
        res[0] = index;
        res[1] = countOnes;
    }
    return res;
}


int main()
{
    vector<vector<int>> mat = {
        {0, 1, 1, 0, 1},
        {1, 1, 0, 1, 0},
        {0, 0, 0, 1, 1},
        {1, 0, 0, 0, 1}
    };

    vector<int> result = rowAndMaximumOnes(mat);

    cout << "Row with the maximum ones: " << result[0] << endl;
    cout << "Number of ones in that row: " << result[1] << endl;
}