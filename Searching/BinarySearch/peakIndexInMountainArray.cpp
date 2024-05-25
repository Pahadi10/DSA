// An array arr is a mountain if the following properties hold:
// arr.length >= 3
// There exists some i with 0 < i < arr.length - 1 such that:
// arr[0] < arr[1] < ... < arr[i - 1] < arr[i] 
// arr[i] > arr[i + 1] > ... > arr[arr.length - 1]
// Given a mountain array arr, return the index i such that arr[0] < arr[1] < ... < arr[i - 1] < arr[i] > arr[i + 1] > ... > arr[arr.length - 1].

// Example 1:
// Input: arr = [0,1,0]
// Output: 1

// Example 2:
// Input: arr = [0,2,1,0]
// Output: 1

// Example 3:
// Input: arr = [0,10,5,2]
// Output: 1
#include <iostream>
#include <vector>

using namespace std;

int peakIndex(vector<int> nums){
    int n = nums.size() - 1;
    int start = 0;
    int end = n;
    int ans = -1;

    while (start < end)
    {
        int mid = start + (end - start)/2;
        
        //hum peak index ke left me hain
        if (nums[mid] < nums[mid + 1])
        {
            start = mid + 1;
        }        
        
        //hum peak index par ya uske right me hain
        else
        {
            ans = mid;
            end = mid;
        }
        
    }
return ans;    
}

int main()
{
   vector<int>nums={10, 20, 50, 30, 40};
   cout<<"Peak index is: "<<peakIndex(nums);
}