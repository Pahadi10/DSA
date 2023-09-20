// Given an array arr[] of size n, find the first repeating element. The element should occur more than once and the index of its first occurrence should be the smallest.
// Note:- The position you return should be according to 1-based indexing.

#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

// First Solution T.C = O(n^2)
int firstRepeatingElemet1(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            if (arr[i] == arr[j])
            {
                return (i + 1);
            }
        }
    }
    return -1;
}

// Second Solution T.C = O(n)
int firstRepeatingElemet2(int arr[], int size)
{
    unordered_map<int, int> hash;
    for (int i = 0; i < size; i++)
    {
        hash[arr[i]]++;
    }
    for (int i = 0; i < size; i++)
    {
        if (hash[arr[i]] > 1)
        {
            return i + 1;
        }
    }
    return -1;
}

int main()
{
    int arr[7] = {10, 5, 3, 4, 3, 5, 6};
    int size = 7;

    cout << "Index of the first repeating element is: " << firstRepeatingElemet1(arr, 7)<<endl;
    cout << "Index of the first repeating element is: " << firstRepeatingElemet2(arr, 7)<<endl;
}