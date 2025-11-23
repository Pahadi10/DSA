// Given an integer N denoting the Length of a line segment. You need to cut the line segment in such a way that the cut length of a line segment each time is either x , y or z. Here x, y, and z are integers.
// After performing all the cut operations, your total number of cut segments must be maximum.

// Note: if no segment can be cut then return 0.

// Example 1:

// Input:
// N = 4
// x = 2, y = 1, z = 1
// Output: 4
// Explanation:Total length is 4, and the cut
// lengths are 2, 1 and 1.  We can make
// maximum 4 segments each of length 1.


#include <iostream>
#include <algorithm>
using namespace std;

int maximizeTheCuts(int n, int x, int y, int z) {
    if (n == 0) {
        return 0;
    }

    if (n < 0) {
        return -1;
    }

    int option1 = 1 + maximizeTheCuts(n - x, x, y, z);
    int option2 = 1+ maximizeTheCuts(n - y, x, y, z);
    int option3 = 1+ maximizeTheCuts(n - z, x, y, z);

    int maxCuts = max(option1, max(option2, option3));
    return maxCuts;

}

int main() {
    int n = 4;
    int x = 2;
    int y = 1;
    int z = 1;

    int result = maximizeTheCuts(n, x, y, z);
    if (result == -1) {
        cout << 0;
    } else {
        cout << result;
    }

    return 0;
}
