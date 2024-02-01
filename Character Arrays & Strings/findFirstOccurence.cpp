// Given two strings needle and haystack, return the index of the first occurrence of needle in haystack, or -1 if needle is not part of haystack.

// Example 1:
// Input: haystack = "sadbutsad", needle = "sad"
// Output: 0
// Explanation: "sad" occurs at index 0 and 6.
// The first occurrence is at index 0, so we return 0.

// Example 2:
// Input: haystack = "leetcode", needle = "leeto"
// Output: -1
// Explanation: "leeto" did not occur in "leetcode", so we return -1.

#include <iostream>
using namespace std;

int strStr(string haystack, string needle)
{
    if (needle.length() > haystack.length())
    {
        return -1;
    }
    
    for (int i = 0; i <= haystack.length() - needle.length(); i++)
    {
        int j = 0;
        while (j < needle.length() && haystack[i + j] == needle[j])
        {
            j++;
        }

        if (j == needle.length())
        {
            return i;
        }
    }

    return -1;
}



int main()
{
    string s1 = "aaa";
    string s2 = "aaaa";

    cout << strStr(s1, s2);
}