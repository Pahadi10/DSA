// Given a list of non-negative integers nums, arrange them such that they form the largest number and return it.
// Since the result may be very large, so you need to return a string instead of an integer.

// Example 1:
// Input: nums = [10,2]
// Output: "210"

// Example 2:
// Input: nums = [3,30,34,5,9]
// Output: "9534330"

#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

static bool comp(string a, string b){
    string t1 = a + b;
    string t2 = b + a;

    return t1 > t2;
}

string largestNumber(vector<int>& nums) {
        string ans="";
        vector<string>snums;
        for (auto i : nums)
        {
            snums.push_back(to_string(i));
        }

        sort(snums.begin(), snums.end(), comp);
        
        if (snums[0] == "0") return 0;
        
        for (auto s : snums)
        {
            ans += s;
        }
        
        return ans;
    }

int main()
{
    vector<int>nums = {3,30,34,5,9};
    cout<<largestNumber(nums);
}
