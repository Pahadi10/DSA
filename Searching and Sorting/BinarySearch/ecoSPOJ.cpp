#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool isPossible(vector<int> trees, int n, int m, int mid)
{

    int totalWood = 0;
    for (int i = 0; i < n; i++)
    {
        totalWood += max(0, trees[i] - mid);
    }
    if (totalWood >= m)
    {
        return true;
    }
    return false;
}

int findMaxmimumHeight(vector<int> trees, int n, int m)
{
    sort(trees.begin(), trees.end());
    int answer = -1;
    int minimum = 0;
    int maximum = trees[trees.size() - 1];

    while (minimum <= maximum)
    {
        int mid = minimum + (maximum - minimum) / 2;
        if (isPossible(trees, n, m, mid))
        {
            answer = mid;
            minimum = mid + 1;
        }
        else
        {
            maximum = mid - 1;
        }
    }
    return answer;
}
int main()
{
    vector<int> trees = {20, 15, 10, 17};
    int n = 4;
    int m = 7;

    cout << findMaxmimumHeight(trees, n, m);
}