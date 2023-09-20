// You are given an integer array nums consisting of n elements, and an integer k.

// Find a contiguous subarray whose length is equal to k that has the maximum average value and return this value. Any answer with a calculation error less than 10^(-5) will be accepted.

#include <iostream>
#include <vector>

using namespace std;

// Method - 1 Brute force method 
//  T.C. = O(n^2)
// Time limit exceeds for huge test cases.

// double findMaxAverage(vector<int> &nums, int k)
// {
//     int n = nums.size() - 1;
//     int i = 0;
//     int j = k - 1;
//     int sum = INT_MIN;
//     double average = 0;

//     while (j <= n)
//     {
//         int sumTemp = 0;
//         for (int temp = i; temp <= j; temp++)
//         {
//             sumTemp += nums[temp];
//         }

//         if (sumTemp >= sum)
//         {
//             sum = sumTemp;
//         }
//         i++;
//         j++;
//     }
//     average = (double)sum / k;
//     return average;
// }

// Method - 2
//  T.C. = O(n*k)
// time limit exceeds in huger test case

// double findMaxAverage(vector<int> &nums, int k)
// {
//     int n = nums.size() - 1;
//     int i = 0;
//     int j = k - 1;
//     int sum = INT_MIN;
//     double average = 0;

//     loop:
//     if (j > n)
//     {
//         average = (double)sum / k;
//         return average;
//     }

//     else{
//         int sumTemp = 0;
//         for (int temp = i; temp <= j; temp++)
//         {
//             sumTemp += nums[temp];
//         }

//         if (sumTemp >= sum)
//         {
//             sum = sumTemp;
//         }
//         i++;
//         j++;
//     }
//     goto loop;
// }


// Method -3 Sliding Window
// T.C. = O(n)

double findMaxAverage(vector<int> &nums, int k)
{
    int n = nums.size() - 1;
    int i = 0;
    int j = k - 1;
    int sum = INT_MIN;
    double average = 0;

    int sumTemp = 0;
    while (j <= n)
    {

        if (i == 0)
        {
            for (int temp = i; temp <= j; temp++)
            {
                sumTemp += nums[temp];
            }
        }
        else
        {
            sumTemp = sumTemp - nums[i-1] + nums[j];
        }

        if (sumTemp >= sum)
        {
            sum = sumTemp;
        }
        i++;
        j++;
    }
    average = (double)sum / k;
    return average;
}

int main()
{
    vector<int> arr = {1, 12, -5, -6, 50, 3};
    int k = 4;

    cout << "Maximum Average of a subArray is: " << findMaxAverage(arr, k);
}