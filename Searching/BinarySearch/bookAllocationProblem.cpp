// Given that there are M books and N students. Also given are the number of pages in each book in ascending order. The task is to assign books in such a way that the maximum number of pages assigned to a student is minimum, with the condition that every student is assigned to read some consecutive books. Print that minimum number of pages.

// Example : 

// Input: M = 4, pages[] = {12, 34, 67, 90}, N = 2

// Output: 113

// Explanation: There are 2 number of students. Books can be distributed in following combinations: 

// [12] and [34, 67, 90] -> Max number of pages is allocated to student ‘2’ with 34 + 67 + 90 = 191 pages
// [12, 34] and [67, 90] -> Max number of pages is allocated to student ‘2’ with 67 + 90 = 157 pages 
// [12, 34, 67] and [90] -> Max number of pages is allocated to student ‘1’ with 12 + 34 + 67 = 113 pages
// Of the 3 cases, Option 3 has the minimum pages = 113.

#include <iostream>
#include <vector>
using namespace std;

bool isPossible(vector<int> nums, int mid, int m, int n)
{
    int currentStudent = 1;
    int pageSum = 0;
    for (int i = 0; i < m; i++)
    {
        if (nums[i] > mid)
        {
            return false;
        }
        if (pageSum + nums[i] > mid)
        {
            currentStudent ++;
            pageSum = nums[i];
            if (currentStudent > n)
            {
                return false;
            }
        }
        else
        {
            pageSum += nums[i];
        }
        
    }
    
        return true;
    
}

int bookAllocation(vector<int> nums, int m, int n)
{
    int start = 0;
    int end = 0;
    for (int i = 0; i < m; i++)
    {
        end += nums[i];
    }
    
    int sol = -1;

    if (n > m)
    {
        return -1;
    }
    while (start <= end)
    {
        int mid = start + (end - start) / 2;
        if (isPossible(nums, mid, m, n))
        {
            sol = mid;
            end = mid - 1;
        }
        else
        {
            start = mid + 1;
        }
    }
    return sol;
}

int main()
{
    vector<int> books ={12, 34, 67, 90};
    int m = 4;
    int n = 2;

    cout<<bookAllocation(books, m, n);
}