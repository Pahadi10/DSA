//Searching Algorithm for a sorted array
//Used to search in a large array
//Also named as:
//1. Doubling Search
//2. Galoping Search
//3. Strazic Search

#include <iostream>
#include <vector>
using namespace std;

int binarySearch(vector<int>nums, int x, int start, int end){
while (start <= end)
{
    int mid = start + (end-start)/2;
    if (x == nums[mid])
    {
        return mid;
    }
    else if (nums[mid] < x)
    {
        start = mid + 1;
    }
    else
    {
        end = mid - 1;
    }
    
}
return -1;
    
}
int exponentialSearch(vector <int> nums, int x){

int i = 1;
int n = nums.size();
if (nums[0] ==x)
{
    return 0;
}
while ( i < n && x >= nums[i])
{
    i = i * 2;
}
return (binarySearch(nums, x, i/2, min(i, n-1)));

}

int main()
{
   vector<int> nums = {2, 4, 10, 18, 20, 26, 40, 38, 69, 74, 86, 99, 100};
   int x = 69;
   cout <<"Index of "<< x <<" in array is: " <<exponentialSearch(nums, x)<<endl;
}