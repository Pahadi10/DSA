/*

Missing Number

Given an array nums containing n distinct numbers in the range [0, n], return the only number in the range that is missing from the array.

*/

#include <iostream>
#include <vector>
using namespace std;

int missingNumber(vector<int> &nums)
{
    int n = nums.size();
    int sumArray = 0;
    for (int i = 0; i < n; i++)
    {
        sumArray += nums[i];
    }

    return (n * (n + 1) / 2) - sumArray;
}

int main()
{
    vector<int> nums = {9, 6, 4, 2, 3, 5, 7, 0, 1};
    cout << "Array: ";
    for (int i = 0; i < nums.size(); i++)
    {
        cout << nums[i]<<" ";
    }
    cout << endl;

    cout << "Missing number: ";
    cout << missingNumber(nums);
    cout << endl;
}