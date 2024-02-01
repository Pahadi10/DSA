// Given a string s, return the longest
// palindromic substring in s.

// Example 1:
// Input: s = "babad"
// Output: "bab"
// Explanation: "aba" is also a valid answer.

// Example 2:
// Input: s = "cbbd"
// Output: "bb"

#include <iostream>
#include <vector>
using namespace std;

//Method -1
//Brute Force Method
// T.C - O(n^3)

// bool isValidPalindrome(string s)
// {
//     int i = 0;
//     int j = s.length() - 1;
//     while (i < j)
//     {
//         if (s[i] == s[j])
//         {
//             i++;
//             j--;
//         }
//         else
//         {
//             return false;
//         }
//     }
//     return true;
// }

// vector<string> generateSubstring(string s)
// {
//     vector<string> palindromStrings;
//     for (int i = 0; i < s.length(); i++)
//     {
//         for (int j = s.length() - 1; j > i; j--)
//         {
//             string temp = s.substr(i, j - i + 1);
//             if (isValidPalindrome(temp))
//             {
//                 palindromStrings.push_back(temp);
//             }
//         }
//     }
//     return palindromStrings;
// }
// string longestPalindrome(string s)
// {
//     int len = 0;
//     string ans;
//     for (auto i : generateSubstring(s))
//     {
//         if (i.length()>len)
//         {
//             ans = i;
//         }
        
//     }
//     return ans;
// }


//Method - 2
//Expansion From Center
//T.C - O(n^2)

string longestPalindrome(string s)
{
    string ans;
    int len = 0;
    int n = s.length();

    for (int cen = 0; cen < n; cen++) {

        // For odd length palindromes
        int i = cen - 1;
        int j = cen + 1;

        while (i >= 0 && j < n && s[i] == s[j]) {
            
            if (j - i + 1 > len) {
                len = j - i + 1;
                ans = s.substr(i, j - i + 1);
            }

            i--;
            j++;
        }

        // For even length palindromes
        i = cen;
        j = cen + 1;

        while (i >= 0 && j < n && s[i] == s[j]) {
            if (j - i + 1 > len) {
                len = j - i + 1;
                ans = s.substr(i, j - i + 1);
            }

            i--;
            j++;
        }
    }

    return ans;
}



int main()
{
    string s = "abb";
    cout<<longestPalindrome(s);
}