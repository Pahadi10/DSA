// 44. Wildcard Matching

// Given an input string (s) and a pattern (p), implement wildcard pattern matching with support for '?' and '*' where:

// '?' Matches any single character.
// '*' Matches any sequence of characters (including the empty sequence).
// The matching should cover the entire input string (not partial).

// Example 1:
// Input: s = "aa", p = "a"
// Output: false
// Explanation: "a" does not match the entire string "aa".

// Example 2:
// Input: s = "aa", p = "*"
// Output: true
// Explanation: '*' matches any sequence.

// Example 3:
// Input: s = "cb", p = "?a"
// Output: false
// Explanation: '?' matches 'c', but the second letter is 'a', which does not match 'b'.

// Constraints:

// 0 <= s.length, p.length <= 2000
// s contains only lowercase English letters.
// p contains only lowercase English letters, '?' or '*'.

#include <iostream>
using namespace std;

bool isMatchRec(string s, string p, int ns, int np)
{
    //We will traverse both the string and the pattern from backward

    // If pattern is empty, it will only match with empty string
    if (np == 0)
    {
        return ns == 0;
    }

    // If string is empty, it can match with * only
    if (ns == 0)
    {
        for (int i = 0; i < np; i++)
        {
            if (p[i] != '*')
            {
                return false;
            }
        }
        return true;
    }

    // If the last character of the string and the pattern matches or the last character of the pattern is '?', move to the second last character
    if (s[ns - 1] == p[np - 1] || p[np - 1] == '?')
    {
        return isMatchRec(s, p, ns - 1, np - 1);
    }

    //If the * character comes in the pattern
    // first case: It matches with zero character
    // second case: It matches with one or more characters
    if (p[np-1] == '*')
    {
        return isMatchRec(s, p, ns, np-1) || isMatchRec(s, p, ns-1, np);

    }
    
    return false;
}

bool isMatch(string s, string p)
{
    int ns = s.length();
    int np = p.length();
    return isMatchRec(s, p, ns, np);
}

int main()
{
    string s = "aa";
    string p = "a";

    cout << isMatch(s, p);
}