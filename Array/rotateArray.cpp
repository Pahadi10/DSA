/*

Rotate Array

Given an integer array nums, rotate the array to the right by k steps, where k is non-negative.

*/

#include <iostream>
#include <vector>
using namespace std;

void rotate(vector<int> &nums, int k)
{
    int n = nums.size();
    vector<int> ans(n);
    for (int i = 0; i < n; i++)
    {
        ans[(i + k) % n] = nums[i];
    }
    nums = ans;
}

int main()
{
    vector<int> nums = {1,2,3,4,5,6,7};
    cout << "Original array: ";
    for (int i = 0; i < nums.size(); i++)
    {
        cout << nums[i]<<" ";
    }
    cout << endl;
    int k = 3;
    rotate(nums, k);

    cout << "Rotated array: ";
    for (int i = 0; i < nums.size(); i++)
    {
        cout << nums[i]<<" ";
    }
    cout << endl;
}