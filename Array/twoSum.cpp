// Given an array of integers nums and an integer target, return indices of the two numbers such that they add up to target.

// You may assume that each input would have exactly one solution, and you may not use the same element twice.

// You can return the answer in any order.

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

    vector<int> twoSum(vector<int>& nums, int target) {
        vector<pair<int, int>> numsWithIndex;
    for (int i = 0; i < nums.size(); i++) {
        numsWithIndex.push_back({nums[i], i});
    }
    sort(numsWithIndex.begin(), numsWithIndex.end());
    int left = 0, right = nums.size() - 1;
    while (left < right) {
        int sum = numsWithIndex[left].first + numsWithIndex[right].first;
        if (sum == target) {
            return {numsWithIndex[left].second, numsWithIndex[right].second};
        } else if (sum < target) {
            left++;
        } else {
            right--;
        }
    }
    return {};
    }

int main() {
    vector<int> nums = {2, 7, 11, 15}; 
    int target = 9;
    
    cout<<"Original array: "<<endl;
    for (int i = 0; i < nums.size(); i++)
    {
        cout<<nums[i]<<" ";
    }
    cout<<endl;
    cout<<"Target: "<<target;
    cout<<endl;

    
    vector<int> result = twoSum(nums, target);

    if (result.size() == 2) {
        cout << "Indices of the two numbers that add up to target are: " << result[0] << " and " << result[1] << endl;
    } else {
        cout << "No valid solution found." << endl;
    }

    return 0;
}
