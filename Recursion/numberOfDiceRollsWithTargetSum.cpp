// 1155. Number of Dice Rolls With Target Sum

// You have n dice, and each dice has k faces numbered from 1 to k.
// Given three integers n, k, and target, return the number of possible ways (out of the kn total ways) to roll the dice, so the sum of the face-up numbers equals target. Since the answer may be too large, return it modulo 109 + 7.

// Example 1:
// Input: n = 1, k = 6, target = 3
// Output: 1
// Explanation: You throw one die with 6 faces.
// There is only one way to get a sum of 3.

// Example 2:
// Input: n = 2, k = 6, target = 7
// Output: 6
// Explanation: You throw two dice, each with 6 faces.
// There are 6 ways to get a sum of 7: 1+6, 2+5, 3+4, 4+3, 5+2, 6+1.

// Example 3:
// Input: n = 30, k = 30, target = 500
// Output: 222616187
// Explanation: The answer must be returned modulo 109 + 7.

// Constraints:

// 1 <= n, k <= 30
// 1 <= target <= 1000



// Not a recursion solution as this is highly complex question, should be done with DP
// time complexity -> k^n 

#include <iostream>
using namespace std;


int numRollsToTarget(int n, int k, int target) 
{
    int ans = 0;
    if (target < 0) return 0;
    if (target == 0 && n == 0) return 1;
    if (target != 0 && n == 0) return 0;
    if (target == 0 && n != 0) return 0;
    
    for (int i = 1; i <= k; i++)
    {
        ans = ans + numRollsToTarget(n-1, k, target-i);
    }
    return ans;
}

int main()
{
    int n = 2;
    int k = 6;
    int target = 7;
    cout<<numRollsToTarget(n, k, target);
}