// Given an array arr[] of size N having integers in the range [1, N] with some of the elements missing. The task is to find the missing elements.
// Note: There can be duplicates in the array.

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

// Method 1 TC- O(n)
int findElement(vector<int> nums)
{
    int n = nums.size();
    int index;
    for (int i = 0; i < n; i++)
    {
        index = abs(nums[i]);

        if (nums[index - 1] > 0)
        {
            nums[index - 1] *= -1;
        }
    }
    for (int i = 0; i < n; i++)
    {
        if (nums[i] > 0)
        {
            return i + 1;
        }
    }
    return -1;
}


// Method 2 TC- O()
int findElement2(vector<int> nums)
{
    int n = nums.size();
    int i = 0;
    while (i < n)
    {
        int index = nums[i] - 1;
        if (nums[i] != nums[index])
        {
            swap(nums[i], nums[index]);
        }
        i++;
    }
    for (int i = 0; i < n; i++)
    {
        if (nums[i] != i + 1)
        {
            return (i + 1);
        }   
    }
    
return -1;
}

int main()
{
    vector<int> arr = {1, 4, 3, 3, 5, 5};
    cout << "Original Array: ";
    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    cout << "Missing element in array containing duplicate elements: " << findElement2(arr);
}