// Given two strings s and t, return true if t is an anagram of s, and false otherwise.
// An Anagram is a word or phrase formed by rearranging the letters of a different word or phrase, typically using all the original letters exactly once.

// Example 1:
// Input: s = "anagram", t = "nagaram"
// Output: true

// Example 2:
// Input: s = "rat", t = "car"
// Output: false

#include <iostream>
#include <vector>
#include <algorithm>
#include <array> 
using namespace std;

//Solition 1 - Using Sorting 
// T.C - O (n Log n)

    // bool isAnagram(string s, string t) {
    //     char map1[256] = {0};
    //     char map2[256] = {0};

    //     if (s.length() != t.length()) {
    //         return false;
    //     } 
    //     else {
    //         sort(s.begin(), s.end());
    //         sort(t.begin(), t.end());
    //         }
    //     cout<<s<<endl;
    //     cout<<t<<endl;
    // return (s == t);
    // } 

//Solition 2 - Using Hashing 
// T.C - O (n)

    bool isAnagram(string s, string t) {
        int freqTable [256] = {0};
        // array<int,256> freqTable = {0}; 
        for (auto i : s)
        {
            freqTable[i] ++;
        }
        
        for (auto i : t)
        {
            freqTable[i] --;
        }
        
        for (int i = 0; i < 256; i++)
        {
            if (freqTable[i] != 0)
            {
                return 0;
            }
            
        }
    return 1;
    } 

int main()
{
    string s = "anagram";
    string t = "nagaram";
    cout<< isAnagram(s, t);
}