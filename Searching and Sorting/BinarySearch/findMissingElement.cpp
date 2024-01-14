// Find only missing element in a sorted array:
// e.g: 1 2 3 4 6 7 8 9 10
//ind : 0 1 2 3 4 5 6 7  8
//output: 5

#include <iostream>
#include <vector>
using namespace std;

int findMissingElement(vector<int>nums){
    int n = nums.size()-1;
    int start = 0;
    int end = n;
    //initialize ans with last element + 1 as if no element is missing, means last number is missing
    int ans = nums[n]+1;

    while (start <= end)
    {
        int mid = start + (end-start)/2;

        // hum missing number ke left me hain
        if (nums[mid] == mid + 1)
        {
            start = mid + 1;
        }
        
        //hum missing number ke right me hain ya missing number par hain
        else
        {
            ans = mid + 1;
            end = mid -1;
        }
        
    }
    return ans;
}
int main()
{
    vector<int>nums ={1, 3, 4, 5, 6, 7, 8, 9};
    cout<<"Missing number is: "<<findMissingElement(nums);
}