// You are given an array consisting of n integers which denote the position of a stall. You are also given an integer k which denotes the number of aggressive cows. You are given the task of assigning stalls to k cows such that the minimum distance between any two of them is the maximum possible.
// The first line of input contains two space-separated integers n and k.
// The second line contains n space-separated integers denoting the position of the stalls.

// Example 1:

// Input:
// n=5 
// k=3
// stalls = [1 2 4 8 9]
// Output:
// 3
// Explanation:
// The first cow can be placed at stalls[0], 
// the second cow can be placed at stalls[2] and 
// the third cow can be placed at stalls[3]. 
// The minimum distance between cows, in this case, is 3, 
// which also is the largest among all possible ways.

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool isPossible(vector<int>stalls, int n, int k, int mid){

int cow = 1;
int position = stalls[0];

for (int i = 1; i < n; i++)
{
    if (stalls[i] - position >= mid)
    {
        cow ++;
        position = stalls[i];
    }
    if (cow == k)
    {
        return true;
    }
    
}
return false;
}

int aggressiveCow(vector<int>stalls, int n, int k){
    
    sort(stalls.begin(), stalls.end());
    int start = 0;
    int end = stalls[stalls.size() - 1] - stalls[0];
    int answer = -1;

    if (k > n)
    {
        return answer;
    }

    while (start <= end)
    {
        int mid = start + (end-start)/2;
        
        if (isPossible(stalls, n, k, mid))
        {
            answer = mid;
            start = mid + 1;
        }
        else
        {
            end = mid -1;
        }
        
    }
    
return answer;   
}
int main()
{
    vector<int> stalls ={1, 2, 4, 8, 9};
    int n = 5;
    int k = 3;

    cout<<aggressiveCow(stalls, n, k);
}