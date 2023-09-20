// Given a matrix mat[][], print it in Wave Form. 

#include <iostream>
#include <vector>
using namespace std;


void printWaveForm(vector<vector<int>>arr){
    
    int m = arr.size();
    int n = arr[0].size();

    for (int column = 0; column < n; column++)
    {
        int row;
        if (column % 2 == 0)
        {   
            row = 0;
            while (row < m)
            {
                cout<<arr[row][column]<<" ";
                row++;
            }
        }
        else
        {
            row = m-1;
            while (row >= 0)
            {
                cout<<arr[row][column]<<" ";
                row--;
            }
        }
        
    }
    

}
int main()
{
   vector<vector<int>>arr = {
    {1, 2, 3, 4},
    {5, 6, 7, 8},
    {9, 10, 11, 12},
    {13, 14, 15, 16},
    {17, 18, 19, 20}
   };

   printWaveForm(arr);

}