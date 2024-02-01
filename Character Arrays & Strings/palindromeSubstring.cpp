// Given a string s, return the number of palindromic substrings in it.
// A string is a palindrome when it reads the same backward as forward.
// A substring is a contiguous sequence of characters within the string.

// Example 1:
// Input: s = "abc"
// Output: 3
// Explanation: Three palindromic strings: "a", "b", "c".

// Example 2:
// Input: s = "aaa"
// Output: 6
// Explanation: Six palindromic strings: "a", "a", "a", "aa", "aa", "aaa".

#include <iostream>
using namespace std;

int countSubstrings(string s)
{

    int n = s.length();
    int count = 0;
    int i;
    int j;

        for (int k = 0; k < n; k++)
        {
                i = k;
                j = k;
            
            while (i >= 0 && j <= n)
            {
                if (s[i] == s[j])
                {
                    count++;
                }
                else
                {
                    break;
                }
                i--;
                j++;
            }
        }
        
        for (int k = 0; k < n; k++)
        {
                i = k;
                j = k + 1;
            
            while (i >= 0 && j <= n)
            {
                if (s[i] == s[j])
                {
                    count++;
                }
                else
                {
                    break;
                }
                i--;
                j++;
            }
        }

    return count;
}
int main()
{
    string s = "aaa";
    cout<<countSubstrings(s);
}