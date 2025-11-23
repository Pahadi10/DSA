// 279. Perfect Squares

// Given an integer n, return the least number of perfect square numbers that sum to n.

// A perfect square is an integer that is the square of an integer; in other words, it is the product of some integer with itself. For example, 1, 4, 9, and 16 are perfect squares while 3 and 11 are not.

// Example 1:
// Input: n = 12
// Output: 3
// Explanation: 12 = 4 + 4 + 4.

// Example 2:
// Input: n = 13
// Output: 2
// Explanation: 13 = 4 + 9.

// Constraints:

// 1 <= n <= 104

#include <iostream>
#include <cmath>

using namespace std;

int numsquareHelper(int n){
        //base case

    if (n == 0 )
    {
        return 1;
    }
    
    if (n < 0 )
    {
        return 0;
    }
    
    int end = sqrt(n);
    int ans = INT_MAX;

    for (int i = 1; i <= end; i++)
    {
        int perfectSquare = i * i;
        int numberOfPerfectSquares = 1 + numsquareHelper(n - perfectSquare);
        if(numberOfPerfectSquares <= ans) ans = numberOfPerfectSquares;
    }
    return ans;
}

int numSquares(int n)
{
    return numsquareHelper(n)-1;
    
}

int main()
{
    int n = 13;
    cout<< numSquares(n);
}