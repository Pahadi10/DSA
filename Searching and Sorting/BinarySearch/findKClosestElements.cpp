/*
Given a sorted integer array arr, two integers k and x, return the k closest integers to x in the array. The result should also be sorted in ascending order.
Example 1:

Input: arr = [1,2,3,4,5], k = 4, x = 3
Output: [1,2,3,4]
Example 2:

Input: arr = [1,2,3,4,5], k = 4, x = -1
Output: [1,2,3,4]
*/

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

//First Method- BruteForce Method 
//T.C - O(n log n)

// bool customComparator(int a, int b, int x) {
//     int diff_a = abs(a - x);
//     int diff_b = abs(b - x);
//     return diff_a < diff_b || (diff_a == diff_b && a < b);
// }

// vector <int> kClosestElements(vector<int>nums, int x, int k){
// vector <int> difference;
// int n = nums.size();

//  sort(nums.begin(), nums.end(), [&](int a, int b) {
//         return customComparator(a, b, x);
//     });

// for (int i = 0; i < k; i++)
// {
//     difference.push_back(nums[i]);
// }

// sort(difference.begin(), difference.end());

// return difference;
// }


//Second Method - 2 ptr approach
// T.C = O(n)

//  vector<int> findClosestElements(vector<int>& arr, int k, int x) {
//         int low = 0, high = arr.size()-1;
//         while(high - low >= k){   
//             if( x - arr[low] > arr[high] - x){
//                 low++;
//             }
//             else{
//                 high--;
//             }
//         }
//     return vector<int>(arr.begin()+low, arr.begin()+high+1);
//     }


//Third Method - Binary Search + 2 ptr
// T.C = O(n)

// 8, 9, 11, 12, 18, 25
// x = 12

int lowerBound(vector<int>& arr, int x){
    int ans;
    int start = arr[0];
    int end = arr.size()-1;
    while (start <= end)
    {
        int mid = start + (end-start)/2;
        
        if (arr[mid] <= x)
        {
            ans = mid;
            start = mid + 1;
        }
        else
        {
            end = mid-1;
        }
        
    }
    return ans;
}

vector<int> findClosestElements(vector<int>& arr, int k, int x) {
    
    int high = lowerBound(arr, x);
    int low;
    if (high == 0) 
    {
        high++;
        low = high - 1;
    }
    else
    {
        low = high - 1;    
    } 
 
    while(k--)
    {
        if (x - arr[low] > arr[high] - x && low > 0)
        {
            high++;
        }
        else if(arr[high] - x >= x - arr[low] && high < arr.size() ){
            low--;
        }
        
    } 
    return vector<int>(arr.begin()+low, arr.begin()+high+1); 
    
 
}



int main()
{
   vector<int> nums = {1, 2, 3, 4, 5};
    int k = 4;
    int x = 3;
   vector<int> ans = findClosestElements(nums, k, x);
   for (int i = 0; i < ans.size(); i++)
   {
    cout<<ans[i]<<" ";
   }
    
}