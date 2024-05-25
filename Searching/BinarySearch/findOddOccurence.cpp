// Find the odd times occuring single number in an array where same numbers will be consecutively given in pairs. and there is only one element which occurs odd number of times.
// example:
// nums = [10, 10, 2, 2, 5, 5, 2, 20, 20, 11, 11, 10, 10]
// index:   0,  1, 2, 3, 4, 5, 6,  7,  8,  9, 10, 11, 12
// Output: 2

#include <iostream>
#include<vector>
using namespace std;

int findOddOccuringElement(vector<int>nums){
    int left = 0;
    int n = nums.size()-1;
    int right = n;

    while (left <= right)
    {
        int mid = left + (right - left)/2;

        if (left == right)
        {
            return nums[left];
        }
        
        if (mid & 1)
        {
            if (nums[mid] == nums[mid - 1] && mid - 1 >= 0)
            {
                left = mid + 1;
            }
            else
            {
                right = mid - 1;
            }

        }
        else
        {
            if (nums[mid] == nums[mid + 1] && mid + 1 <= n)
            {
                left = mid + 2;
            }
            else
            {
                // ans = mid;
                right = mid;                                
            }   
            
        }
        
    }
    return -1;
    
}

int main()
{
    vector<int>nums{10, 10, 2, 2, 5, 5, 2, 20, 20, 11, 11, 10, 10};
    cout<<"Odd occuring element in the array is: "<<findOddOccuringElement(nums)<<endl;
}