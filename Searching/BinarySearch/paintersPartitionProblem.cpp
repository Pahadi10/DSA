// Given are N boards of with length of each given in the form of array, and K painters, such that each painter takes 1 unit of time to paint 1 unit of the board. The task is to find the minimum time to paint all boards under the constraints that any painter will only paint continuous sections of boards, say board {2, 3, 4} or only board {1} or nothing but not board {2, 4, 5}.
// Examples: 
// Input: N = 4, A = {10, 10, 10, 10}, K = 2 
// Output : 20
// Explanation: Here we can divide the boards into 2 equal sized partitions (Painter 1 will paint boards A1 and A2, and Painter 2 will paint boards A3 and A4). So each painter gets 20 units of board and the total time taken is 20. 

#include <iostream>
#include<vector>
using namespace std;

bool isPossible(vector <int> boards, int mid, int n, int k){
int timeSum = 0;
int currentPainter = 1;
for (int i = 0; i < n; i++)
{
    if (boards[i] > mid)
    {
        return false;
    }
    if (timeSum + boards[i] > mid)
    {
        currentPainter++;
        timeSum = boards[i];

        if (currentPainter > k)
        {
            return false;
        }
        
    }
    
    else
    {
        timeSum += boards[i];
    }
    
}
return true;
}

int painterPartition(vector <int> boards, int n, int k){
int min = 0;
int max;
int ans = -1;

if (k > n)
{
    return ans;
}

for (int i = 0; i < boards.size(); i++)
{
    max += boards[i];
}

while (min <= max)
{
    int mid = min + (max-min)/2;
    if (isPossible(boards, mid, n, k))
    {
        ans = mid;
        max = mid - 1;
    }
    else
    {
        min = mid + 1;
    }

}
return ans;
}
int main()
{
    vector<int> boards ={2, 1, 5, 6, 2, 3};
    int n = 6;
    int k = 2;

    cout<<painterPartition(boards,n, k);
}