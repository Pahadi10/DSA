// Write a function to find the longest common prefix string amongst an array of strings.
// If there is no common prefix, return an empty string "".

// Example 1:
// Input: strs = ["flower","flow","flight"]
// Output: "fl"

// Example 2:
// Input: strs = ["dog","racecar","car"]
// Output: ""
// Explanation: There is no common prefix among the input strings.
 
 #include <iostream>
 #include <vector>
 using namespace std;
 
 string longestCommonPrefix(vector<string>& strs) {
        string ans = strs[0];

        for (int i = 1; i < strs.size(); i++)
        {
            string temp = strs[i];
            string t = "";
            for (int j = 0; j < temp.length(); j++)
            {
                if (ans[j] == temp[j])
                {
                    t.push_back(temp[j]);
                }
                else
                {
                    break;
                }
            }
            ans = t;
        }
        
    return ans;
    }
 int main()
 {
    vector<string>strs = {"dog","racecar","car"};
    cout<<"Common Prefix: "<<longestCommonPrefix(strs);
 }