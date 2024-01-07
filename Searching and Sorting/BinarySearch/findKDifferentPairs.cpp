// Input: nums = [3,1,4,1,5], k = 2
// Output: 2
// Explanation: There are two 2-diff pairs in the array, (1, 3) and (3, 5).
// Although we have two 1s in the input, we should only return the number of unique pairs.

#include <iostream>
#include <vector>
#include <algorithm>
#include <set>
using namespace std;

// Method 1- using 2 pointer approach
// T.C O(n logn)

// int findKDifferentPairs(vector<int> &nums, int k)
// {

//     int n = nums.size();
//     sort(nums.begin(), nums.end());
//     int i = 0;
//     int j = i + 1;
//     set<pair<int, int>> ans;
//     while (j < n)
//     {
//         int difference = nums[j] - nums[i];
//         if (difference == k)
//         {
//             ans.insert({nums[i++], nums[j++]});
//         }
//         else if (difference < k)
//         {
//             j++;
//         }
//         else if (difference > k)
//         {
//             i++;
//         }
//         if (i == j)
//         {
//             j++;
//         }
//     }
//     return ans.size();
// }




//Method 2 using binary search
// T.C O(n logn)

int binarySearch(vector<int> &nums, int start, int x)
{
    int end = nums.size() - 1;
    while (start <= end)
    {
        int mid = start + (end - start) / 2;
        if (nums[mid] == x)
        {
            return mid;
        }
        else if (nums[mid] < x)
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
    }
    return -1;
}

int findKDifferentPairs(vector<int> &nums, int k)
{
    int n = nums.size();
    sort(nums.begin(), nums.end());
    set<pair<int, int>> ans;
    for (int i = 0; i < n; i++)
    {
        if (binarySearch(nums, i + 1, nums[i] + k) != -1)
        {
            ans.insert({nums[i], nums[i] + k});
        }
    }
    return ans.size();
}

int main()
{
    vector<int> nums = {3, 1, 4, 1, 5};
    int k = 2;

    cout << findKDifferentPairs(nums, k);
}