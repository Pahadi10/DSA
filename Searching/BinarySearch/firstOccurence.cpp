//Find the first occurence of a number in an sorted array arr
// Example:
// arr = [10, 20, 30, 30, 40, 50, 60, 70]
// target = 30
// Output = 2

#include <iostream>
#include <vector>
using namespace std;

int firstOccurence(vector<int>arr, int target){
    int start = 0;
    int end = arr.size()-1;
    int ans = -1;
    while (start <= end)
    {
        int mid = start + (end - start)/2;

        if (arr[mid] < target)
        {
            start = mid + 1;
        }
        else if (arr[mid] > target)
        {
            end = mid - 1;
        }
        else
        {
            ans = mid;
            end = mid - 1;
        }
            
    }
    return ans;
}

int main()
{
   vector<int> nums = {10, 20, 30, 30, 30, 40, 40, 50, 60, 70};
   int target = 70;

   cout<<firstOccurence(nums, target);

}