/*

Sort Colors/ Dutch Flag Problem

Given an array nums with n objects colored red, white, or blue, sort them in-place so that objects of the same color are adjacent, with the colors in the order red, white, and blue.
We will use the integers 0, 1, and 2 to represent the color red, white, and blue, respectively.

*/

#include <iostream>
#include <vector>
using namespace std;

void sortColors(vector<int>& nums) {
        int n = nums.size();
        int low = 0, mid = 0, end = n -1;
        while(mid <= end){
          if(nums[mid] == 0){
            swap(nums[low], nums[mid]);
            low ++;
            mid ++;
          }
          else if(nums[mid] == 1){
            mid++;
          }
          else{
            swap(nums[mid], nums[end]);
            end--;
          }
        }
    }

int main()
{
   vector<int>nums = {2, 0, 2, 1, 1, 0};
   cout<<"Original array: ";
   for (int i = 0; i < nums.size(); i++)
   {
    cout<<nums[i];
   }
   cout<<endl;

   sortColors(nums);

   cout<<"Sorted array: ";
   for (int i = 0; i < nums.size(); i++)
   {
    cout<<nums[i];
   }
   cout<<endl;
}