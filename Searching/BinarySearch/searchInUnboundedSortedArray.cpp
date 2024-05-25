// Search in an infinite/unbounded Sorted array where we do not know the size or the end index of the array

#include <iostream>
#include <vector>

using namespace std;

int binarySearch(vector<int>nums, int start, int end, int x){
while (start <= end)
{
    int mid = start + (end-start)/2;
    if (x == nums[mid])
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
// Method 1 using Brute force (Linear search method)
// T.C - O(n)
int searchBruteForce(vector<int> nums, int x)
{
    int i = 0;
    while (nums[i] <= x)
    {
        if (nums[i] == x)
        {
            return i;
        }
        i++;
    }
    return -1;
}

//Method 2 using Exponential Search (Binary search method)
// T.c O(2^(Log (m-1)))
int searchExponential(vector<int> nums, int x){
    int i = 1;
    if (nums[0] == x)
    {
        return 0;
    }
    while (nums[i] <= x)
    {
        i = i * 2;
    }
    return(binarySearch(nums, i/2, i, x));
}

int main()
{
    vector<int> nums = {2, 4, 10, 18, 20, 26, 38, 40, 69, 74, 86, 99, 100, 121, 133, 142, 159};
    int x = 74;
    cout << "Index of " << x << " in array is (using brute force method): " << searchBruteForce(nums, x) << endl;
    cout << "Index of " << x << " in array is (using brute force method): " << searchExponential(nums, x) << endl;
}