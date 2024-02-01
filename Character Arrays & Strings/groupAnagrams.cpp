// Given an array of strings strs, group the anagrams together. You can return the answer in any order.
// An Anagram is a word or phrase formed by rearranging the letters of a different word or phrase, typically using all the original letters exactly once.

// Example 1:
// Input: strs = ["eat","tea","tan","ate","nat","bat"]
// Output: [["bat"],["nat","tan"],["ate","eat","tea"]]

// Example 2:
// Input: strs = [""]
// Output: [[""]]

// Example 3:
// Input: strs = ["a"]
// Output: [["a"]]

#include <iostream>
#include <vector>
#include <map>
#include <algorithm>
#include <array>

using namespace std;

//Method -1 Using sorting and than mapping key with pair
//Time complexity is more because of extra sorting step

// vector<vector<string>> groupAnagrams(vector<string> &strs)
// {
    // vector<vector<string>> ans;
    // map<string, vector<string>> mp;
    // for (auto s : strs)
    // {
    //     string temp = s;
    //     sort(temp.begin(), temp.end());
    //     mp[temp].push_back(s);
    // }
    // for (auto it = mp.begin(); it != mp.end(); it++)
    // {
    //     ans.push_back(it->second);
    // }
    // return ans;
// }

//Method -2 Using hashing and than mapping key with pair
//Time complexity is less than above method 1.

array<int, 256> hashi(string s){
    array<int, 256> hash = {0};
    for (auto i : s)
    {
        hash[i]++;
    }
    return hash;   
}
vector<vector<string>> groupAnagrams(vector<string> &strs)
{
    vector<vector<string>> ans;
    map<array<int, 256>, vector<string>> mp;

    for (auto s : strs)
    {
        mp[hashi(s)].push_back(s);
    }

    for (auto it = mp.begin(); it != mp.end(); it++)
    {
        ans.push_back(it->second);
    }
    return ans;
}



void print(vector<vector<string>> s)
{
    for (int i = 0; i < s.size(); i++)
    {
        cout << "[";
        vector<string> temp = s[i];
        for (int j = 0; j < temp.size(); j++)
        {
            cout << temp[j] << " ";
        }
        cout << "]";
    }
}
int main()
{
    vector<string> strs = {"eat", "tea", "tan", "ate", "nat", "bat"};
    cout << "Grouped anagrams: ";
    print(groupAnagrams(strs));
}