// Given an integer array nums sorted in non-decreasing order, remove the duplicates in-place such that each unique element appears only once. The relative order of the elements should be kept the same. Then return the number of unique elements in nums.
// Consider the number of unique elements of nums to be k, to get accepted, you need to do the following things:

// Change the array nums such that the first k elements of nums contain the unique elements in the order they were present in nums initially. The remaining elements of nums are not important as well as the size of nums.
// Return k.

#include <iostream>
#include <vector>

using namespace std;

int removeDuplicates(vector<int> &nums)
{
    int i = 1, j = 0;

    while (i < nums.size())
    {

        if (nums[j] == nums[i]) ++i;
        else if (nums[++j] = nums[i++]);
    }
    return j + 1;
}
int main()
{
    vector<int> nums{
        0, 0, 0, 1, 1, 2, 3, 3, 3};
    cout << removeDuplicates(nums);
}