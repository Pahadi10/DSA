// Given a string s, rearrange the characters of s so that any two adjacent characters are not the same.
// Return any possible rearrangement of s or return "" if not possible.

// Example 1:
// Input: s = "aab"
// Output: "aba"

// Example 2:
// Input: s = "aaab"
// Output: ""

#include <iostream>
#include <map>
using namespace std;

string reorganizeString(string s)
{
    int hash[26] = {0};
    int maxFreq = 0;
    char mostFreq;
    for (auto ch : s)
    {
        hash[ch - 'a']++;
    }

    for (int i = 0; i < 26; i++)
    {
        if (hash[i] > maxFreq)
        {
            maxFreq = hash[i];
            mostFreq = i + 'a';
        }
    }

    int i = 0;
    while (maxFreq > 0 && i < s.size())
    {
        s[i] = mostFreq;
        maxFreq--;
        i += 2;
    }

    if (maxFreq != 0)
    {
        return "";
    }
    hash[mostFreq - 'a'] = 0;

        for (int j = 0; j < 26; j++)
        {
            
                while (hash[j] > 0)
                {
                    i = i >= s.size() ? 1 : i;
                    s[i] = j + 'a';
                    hash[j]--;
                    i += 2;
                }
            
        }
        

    return s;
}

int main()
{
    string s = "vvvlo";
    cout << reorganizeString(s);
}