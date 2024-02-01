// Given two strings s and t, determine if they are isomorphic.
// Two strings s and t are isomorphic if the characters in s can be replaced to get t.
// All occurrences of a character must be replaced with another character while preserving the order of characters. No two characters may map to the same character, but a character may map to itself.

// Example 1:
// Input: s = "egg", t = "add"
// Output: true

// Example 2:
// Input: s = "foo", t = "bar"
// Output: false

// Example 3:
// Input: s = "paper", t = "title"
// Output: true

#include <iostream>
using namespace std;

bool isIsomorphic(string s, string t)
{
    if (s.length() != t.length())
    {
        return false;
    }
    else
    {
        char s2t[256] = {0};
        char t2s[256] = {0};
        for (int i = 0; i < s.size(); i++)
        {
            if (s2t[s[i]] == 0 && t2s[t[i]] == 0)
            {
                s2t[s[i]] = t[i];
                t2s[t[i]] = s[i];
            }
            else if (s2t[s[i]] != t[i] || t2s[t[i]] != s[i])
                {
                    return false;
                }
        }
    }
        return true;
    }

    int main()
    {
        string s = "foo";
        string t = "bar";

        cout << isIsomorphic(s, t);
    }