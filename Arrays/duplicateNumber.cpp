// Given an array of integers nums containing n + 1 integers where each integer is in the range [1, n] inclusive.
// There is only one repeated number in nums, return this repeated number.
// You must solve the problem with only constant extra space.

#include <iostream>
#include<vector>
#include<algorithm>

using namespace std;

//Method 1 
// T.C - O(n)

int findDuplicate1(vector<int>& nums) {
        int n = nums.size();
        int ans = -1;
        for(int i = 0; i < n; i++){
            int index = abs(nums[i]);
            if( nums[index] < 0){
                return index;
            }
                nums[index] *= -1;
            }

    return ans;
}


//Method 2
// T.C - O(n)

int findDuplicate2(vector<int>& nums) {
        int n = nums.size();
        sort(nums.begin(), nums.end());
        for (int i = 0; i < n - 1; i++)
        {
            if (nums[i] == nums[i+1])
            {
                return nums[i];
            }
            
        }
        
return -1;
}


//Method 3
// T.C - O(n)

int findDuplicate3(vector<int>& nums) {
        while (nums[0] != nums[nums[0]])
        {
            swap(nums[0], nums[nums[0]]);
        } 
    return nums[0];
}

int main()
{
    vector<int> arr = {1, 4, 3, 2, 2};
    cout<<"Original Array: ";
    for (int i = 0; i < arr.size(); i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    cout<<"Duplicate Number in Array using 1st method: "<<findDuplicate1(arr);
    cout<<endl;
    arr = {1, 4, 3, 2, 2};
    cout<<"Duplicate Number in Array using 2nd method: "<<findDuplicate2(arr);
    cout<<endl;
    arr = {1, 4, 3, 2, 2};
    cout<<"Duplicate Number in Array using 3rd method: "<<findDuplicate3(arr);
}  