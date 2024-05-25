/*
Rearrange Array Elements by Sign


You are given a 0-indexed integer array nums of even length consisting of an equal number of positive and negative integers.

You should rearrange the elements of nums such that the modified array follows the given conditions:

1. Every consecutive pair of integers have opposite signs.
2. For all integers with the same sign, the order in which they were present in nums is preserved.
3. The rearranged array begins with a positive integer.

Return the modified array after rearranging the elements to satisfy the aforementioned conditions.

*/

#include <iostream>
#include <vector>

using namespace std;

vector<int> rearrangeArray(vector<int> &nums)
{
    int n = nums.size();
    vector<int> result(n);

    int positiveIndex = 0;
    int negativeIndex = 1;

    for (int i = 0; i < n; i++)
    {
        if (nums[i] > 0)
        {
            result[positiveIndex] = nums[i];
            positiveIndex += 2;
        }
        else
        {
            result[negativeIndex] = nums[i];
            negativeIndex += 2;
        }
    }

    return result;
}


int main()
{
    vector<int> array = {3, 1, -2, -5, 2, -4};

    cout << "Original array: ";
    for (int i = 0; i < array.size(); i++)
    {
        cout << array[i]<<" ";
    }
    cout << endl;

    cout << "Array after rearranging: ";
    array = rearrangeArray(array);
    for (int i = 0; i < array.size(); i++)
    {
        cout << array[i]<<" ";
    }
    cout << endl;
}