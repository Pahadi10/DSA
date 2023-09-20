// Given a matrix mat[][], print it in Spiral Form.

#include <iostream>
#include <vector>
using namespace std;

void printSpiralForm(vector<vector<int>> arr)
{
    // vector<int>ans;
    int m = arr.size();
    int n = arr[0].size();

    int total_elements = m * n;

    int startingRow = 0;
    int startingColumn = 0;
    int endingRow = m-1;
    int endingColumn = n-1;
    int count = 0;
    
    while (count >= 0)
    {
        // starting Row
        for (int i = startingColumn; i <= endingColumn && count< total_elements; i++)
        {
            // ans.push_back(arr[startingRow][i]);
            cout<< arr[startingRow][i]<<" ";
            count++;
        }
        startingRow++;

        // Ending Column
        for (int i = startingRow; i <= endingRow && count< total_elements; i++)
        {
            // ans.push_back(arr[i][endingColumn]);
            cout<< arr[i][endingColumn]<<" ";
            count++;
        }
        endingColumn--;

        // Ending Row
        for (int i = endingColumn; i >= startingColumn && count< total_elements; i--)
        {
            // ans.push_back(arr[endingRow][i]);
            cout<< arr[endingRow][i]<<" ";
            count++;
        }
        endingRow--;
        // Starting Column
        for (int i = endingRow; i >= startingRow && count< total_elements; i--)
        {
            // ans.push_back(arr[i][startingColumn]);
            cout<< arr[i][startingColumn]<<" ";
            count++;
        }
        startingColumn++;
                
    }

}
int main()
{
    vector<vector<int>> arr = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12},
        {13, 14, 15, 16},
        {17, 18, 19, 20}};

    printSpiralForm(arr);
    

}